class Solution {
public:
    int startingPos(vector<int>& nums, int target){
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    int endingPos(vector<int>& nums, int target){
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;   
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        result.push_back(startingPos(nums,target));
        result.push_back(endingPos(nums,target));
        return result;
    }
};