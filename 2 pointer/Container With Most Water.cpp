/*
Given an array arr[] of non-negative integers, where each element arr[i] represents the height of the vertical lines,
find the maximum amount of water that can be contained between any two lines, together with the x-axis.
Note: In the case of a single vertical line it will not be able to hold water.
*/
class Solution {
    public:
      int maxWater(vector<int> &arr) {
          // code here
          int n = arr.size();
          int left = 0 , right = n - 1;
          int water = 0;
          while(left<right){
              int w = right-left;
              int ht = min(arr[right],arr[left]);
              int curr_wt = ht*w;
              water = max(water,curr_wt);
              arr[left]<arr[right]?left++:right--;
          }
          return water;
      }
  };