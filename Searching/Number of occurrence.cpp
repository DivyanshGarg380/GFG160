/*
Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 
*/
class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          // code here
          int low=0, high = arr.size()-1;
          int result1=-1, result2=-1;
          // first left mein dekhte hai
          while(low<=high){
              int mid = low + (high-low)/2;
              if(arr[mid]==target){
                  result1 = mid;
                  high = mid - 1;
              }
              else if(arr[mid]<target){
                  low = mid + 1;
              }
              else {
                  high = mid - 1;
              }
          }
          if(result1 == -1) return 0;
          // ab right mein dekhte hai
          low = 0 , high = arr.size()-1;
          while(low<=high){
              int mid = low + (high-low)/2;
              if(arr[mid]==target){
                  result2 = mid;
                  low = mid + 1;
              }
              else if(arr[mid]<target){
                  low = mid + 1;
              }
              else high = mid - 1;
          }
          return result2 - result1 + 1;
      }
  };
  