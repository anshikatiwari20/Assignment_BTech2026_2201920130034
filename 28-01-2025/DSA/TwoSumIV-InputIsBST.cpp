class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>vec;
        inOrder(root,vec);
        int i=0;
        int j=vec.size()-1;
        while(i<j){
            if(vec[i]+vec[j]==k){
                return true;
            }
            else if(vec[i]+vec[j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
    void inOrder(TreeNode* root,vector<int>& vec){
        if(root==NULL){
            return;
        }
        inOrder(root->left, vec);
        vec.push_back(root->val);
        inOrder(root->right, vec);
    }
};