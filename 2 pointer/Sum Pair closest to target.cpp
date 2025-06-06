/*
Given an array arr[] and a number target, find a pair of elements (a, b) in arr[], where a<=b whose sum is closest to target.
Note: Return the pair in sorted order and if there are multiple such pairs return the pair with maximum absolute difference. 
If no such pair exists return an empty array.
*/
class Solution {
    public:
      vector<int> sumClosest(vector<int>& arr, int target) {
          // code here
          sort(arr.begin(),arr.end());
          int start = 0 , end = arr.size()-1;
          int MIN_DIFF = INT_MAX;
          int MAX_DIFF = -1;
          vector<int>res;
          while(start<end){
              int sum = arr[start] + arr[end];
              int diff = abs(sum-target);
              int absDiff = abs(arr[start]-arr[end]);
              if(diff < MIN_DIFF || diff == MIN_DIFF && absDiff > MAX_DIFF){
                  MIN_DIFF = diff;
                  MAX_DIFF = absDiff;
                  res = {arr[start],arr[end]};
              }
              if(sum<target) start++;
              else end--;
          }
          return res;
      }
  };