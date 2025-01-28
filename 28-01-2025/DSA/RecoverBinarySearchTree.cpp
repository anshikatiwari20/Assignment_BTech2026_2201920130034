class Solution {
public:
    void recoverTree(TreeNode* root) {
        vector<int>vec;
        inorder(root,vec);
        sort(vec.begin(),vec.end());
        int i=0;
        recoverTreeHelper(root, vec, i);
        
    }
    void recoverTreeHelper(TreeNode* root, vector<int>& vec, int& i){
        if(root==NULL){
            return;
        }
        recoverTreeHelper(root->left, vec, i);
        if(root->val!=vec[i]){
            root->val=vec[i];
        }
        i++;
        recoverTreeHelper(root->right, vec, i);
    }

    void inorder(TreeNode* root, vector<int>& vec){
        if(root==NULL){
            return;
        }
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
};