class BSTIterator {
private:
    stack<TreeNode*>st;
public:
    BSTIterator(TreeNode* root) {
        pushNode(root);
    }
    
    int next() {
        TreeNode* node=st.top();
        st.pop();
        if(node->right!=NULL){
            pushNode(node->right);
        }
        return node->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }

    void pushNode(TreeNode* node){
        while(node!=NULL){
            st.push(node);
            if(node->left!=NULL){
                node=node->left;
            }
            else{
                break;
            }
        }
    }
};