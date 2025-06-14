/*
A sorted array of distinct elements arr[] is rotated at some unknown point, the task is to find the minimum element in it. 
*/
class Solution {
    public:
      int findMin(vector<int>& arr) {
          // complete the function here
          int left = 0 , right = arr.size()-1;
          while(left<right){
              int mid = left + (right-left)/2;
              if(arr[mid] > arr[right]) left = mid + 1;
              else right = mid;
          }
          return arr[left];
      }
  };
  