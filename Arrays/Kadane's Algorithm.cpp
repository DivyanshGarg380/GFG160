/*
Given an integer array arr[]. You need to find the maximum sum of a subarray.
*/
class Solution {
    public:
      int maxSubarraySum(vector<int> &arr) {
          // Your code here
          int n = arr.size();
          int res = arr[0];
          int max_res = arr[0];
          for(int i=1;i<n;i++){
              max_res = max(max_res+arr[i],arr[i]);
              res = max(res,max_res);
          }
          return res;
      }
  };
  
  