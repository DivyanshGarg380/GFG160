/*
Given two strings s1 and s2 consisting of lowercase characters. T
he task is to check whether two given strings are an anagram of each other or not. 
An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
For example, "act" and "tac" are an anagram of each other. Strings s1 and s2 can only contain lowercase alphabets.
Note: You can assume both the strings s1 & s2 are non-empty.
*/

class Solution {
    public:
      // Function is to check whether two strings are anagram of each other or not.
      bool areAnagrams(string& s1, string& s2) {
          // Your code here
          int l1 = s1.size();
          int l2 = s2.size();
          if(l1!=l2) return false;
          sort(s1.begin(),s1.end());
          sort(s2.begin(),s2.end());
          if(s1==s2) return true;
          return false;
      }
  };