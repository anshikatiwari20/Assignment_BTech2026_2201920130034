class Solution {
public:
    int countNodes(TreeNode* root) {
        int cnt=0;
        return solve(root,cnt); 
    }
    int solve(TreeNode* root, int& cnt){
        if(root==NULL){
            return 0;
        }
        solve(root->left,cnt);
        cnt++;
        solve(root->right,cnt);
        return cnt;
    }

};