/*
Given an array arr[] with non-negative integers representing the height of blocks. 
If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
*/
class Solution {
    public:
      int maxWater(vector<int> &arr) {
          // code here
          int left=0,right=arr.size()-1;
          int lmax = 0 , rmax = 0 , ans = 0;
          while(left<right){
              if(arr[left]<arr[right]){
                  if(arr[left]>lmax){
                      lmax = arr[left];
                  }
              else  ans += lmax - arr[left];
              left++;
              }
              else{
                  if(arr[right]>rmax){
                      rmax = arr[right];
                  }
                  else ans += rmax - arr[right];
                  right--;
              }
          }
          return ans;
      }
  };