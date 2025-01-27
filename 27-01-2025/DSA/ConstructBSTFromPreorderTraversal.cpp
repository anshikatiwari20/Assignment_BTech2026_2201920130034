class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* dummy= new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++){
            TreeNode* root=dummy;
            TreeNode* node=new TreeNode(preorder[i]);
            while(true){
                if(preorder[i]>root->val){
                    if(root->right!=NULL){
                        root=root->right;
                    }
                    else{
                        root->right=node;
                        break;
                    } 
                }
                else{
                    if(root->left!=NULL){
                        root=root->left;
                    }
                    else{
                        root->left=node;
                        break;
                    }
                }
            }

        }
        return dummy;
    }
};