class Solution {
  private:
      bool isPalindrome(string s, int start, int end){
          while(start<=end){
              if(s[start]!=s[end]) return false;
              start++;
              end--;
          }
          return true;
      }
      void solve(int ind,string& s,vector<vector<string>>&ans,vector<string>&vec){
          if(ind==s.size()){
              ans.push_back(vec);
              return;
          }
          for(int i=ind;i<s.size();i++){
              if(isPalindrome(s,ind,i)){
                  vec.push_back(s.substr(ind,i-ind+1));
                  solve(i+1,s,ans,vec);
                  vec.pop_back();
              }
          }
      }
  public:
      vector<vector<string>> partition(string s) {
          vector<vector<string>>ans;
          vector<string>vec;
          solve(0,s,ans,vec);
          return ans;
      }
  };