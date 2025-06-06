/*
Given an array arr[] that contains positive and negative integers (may contain 0 as well). 
Find the maximum product that we can get in a subarray of arr[].
Note: It is guaranteed that the output fits in a 32-bit integer.
*/
// User function Template for C++
class Solution {
    public:
      // Function to find maximum product subarray
      int maxProduct(vector<int> &arr) {
          // Your Code Here
          int n=arr.size();
          if(n==0) return 0;
          int m = arr[0];
          int min_prod = arr[0];
          int result = arr[0];
          for(int i=1;i<n;i++){
              if(arr[i]<0) swap(m,min_prod);
              m = max(arr[i],m*arr[i]);
              min_prod = min(arr[i],min_prod*arr[i]);
              result = max(result,m);
          }
          return result;
      }
  };