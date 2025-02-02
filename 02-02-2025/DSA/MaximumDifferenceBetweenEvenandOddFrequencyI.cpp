class Solution {
public:
    int maxDifference(string s) {
        map<char,int>mpp;
        for(auto it: s){
            mpp[it]++;
        }
        int odd=INT_MIN;
        int even=INT_MAX;
        for(auto it:mpp){
            if(it.second%2==1){
                odd=max(odd,it.second);
            }
            if(it.second%2==0){
                even=min(even,it.second);
            }
        }
        return odd-even;
    }
};