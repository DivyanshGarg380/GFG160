/*
Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros.
*/

// User function template for C++
class Solution {
    public:
      string addBinary(string& s1, string& s2) {
          // your code here
          string res = "";
          int i=s1.size()-1;
          int j=s2.size()-1;
          int carry = 0;
          while(i>=0||j>=0||carry){
              int sum = carry;
              if(i>=0) sum += s1[i--] - '0';
              if(j>=0) sum += s2[j--] - '0';
              carry = sum/2;
              res.push_back((sum%2)+'0');
          }
          reverse(res.begin(),res.end());
          int pos = 0 ;
          while(pos<res.size()-1&&res[pos]=='0') pos++;
          return res.substr(pos);
      }
      
  };