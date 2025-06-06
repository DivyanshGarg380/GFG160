/*
You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.
Note: Positive number starts from 1. The array can have negative integers too.
*/
class Solution {
    public:
      // Function to find the smallest positive number missing from the array.
      int missingNumber(vector<int> &arr) {
          // Your code here
          vector<int>res;
          for(int i=0;i<arr.size();i++){
              if(arr[i]>0) res.push_back(arr[i]);
          }
          vector<int>r(1e6,0);
          res.resize(res.size());
          for(int i=0;i<res.size();i++){
              r[res[i]]++;
          }
          for(int i=1;i<1e6;i++){
              if(r[i]==0) return i;
          }
      }
  };