/*
Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. 
You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. 
You need to find the first subarray whose sum is equal to the target.
Note: If no such array is possible then, return [-1]
*/
class Solution {
    public:
      vector<int> subarraySum(vector<int> &arr, int target) {
          // code here
          int n = arr.size(),sum = 0;
          int start = 0 ;
          for(int i=0;i<n;i++){
              sum += arr[i];
              while(sum > target){
                  sum -= arr[start];
                  start++;
              }
              if(sum==target) return {start+1,i+1};
          }
          return {-1};
      }
  };