/*
Given a string s consisting of lowercase English Letters. Return the first non-repeating character in s.
If there is no non-repeating character, return '$'.
Note: When you return '$' driver code will output -1.
*/
class Solution {
    public:
      char nonRepeatingChar(string &s) {
          // Your code here
          unordered_map<char,int>freq;
          for(char it : s){
              freq[it]++;
          }
          for(char it : s){
              if(freq[it] == 1) return it;
          }
          return '$';
      }
  };