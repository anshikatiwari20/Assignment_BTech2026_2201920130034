class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
                int repeat=n/i;
                string str=s.substr(0,i);
                string newstr="";
                while(repeat){
                    newstr+=str;
                    repeat--;
                }
                if(newstr==s){
                    return true;
                }
            }
        }
        return false;
    }
};