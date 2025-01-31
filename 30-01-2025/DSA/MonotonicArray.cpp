class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<=2){
            return true;
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1]){
                cnt++;
                continue;
            }
            else{
                break;
            }
        }
        if(cnt==n-1){
            return true;
        }
        cnt=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                cnt++;
                continue;
            }
            else{
                break;
            }
        }
        if(cnt==n-1){
            return true;
        }
        return false;
    }
};