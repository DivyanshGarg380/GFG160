/*
Given a string s, find the length of the longest substring with all distinct characters. 
*/
class Solution {
    public:
      int longestUniqueSubstr(string &s) {
          // code here
          int n = s.length();
          unordered_set<char>seen;
          int start = 0 , len = 0 ;
          for(int i=0;i<n;i++){
              while(seen.count(s[i])>0){
                  seen.erase(s[start]);
                  start++;
              }
              seen.insert(s[i]);
              len = max(len, i - start + 1);
          }
          return len;
      }
  };
  