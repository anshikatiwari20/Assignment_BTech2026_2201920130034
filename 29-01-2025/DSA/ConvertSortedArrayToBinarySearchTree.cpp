class Solution {
private:
    TreeNode* helper(vector<int>& nums,int l, int r){
        if(l>r){
            return NULL;
        }
        int mid=l+(r-l)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        node->left=helper(nums,l,mid-1);
        node->right=helper(nums,mid+1,r);
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};