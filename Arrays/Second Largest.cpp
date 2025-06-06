/*
Given an array of positive integers arr[], return the second largest element from the array. 
If the second largest element doesn't exist then return -1.
Note: The second largest element should not be equal to the largest element.
*/
class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          // Code Here
          int c = INT_MIN, sl = INT_MIN; 
      for (int i = 0; i < arr.size(); i++) {
          if (arr[i] > c) {
              sl = c;      
              c = arr[i]; 
          } else if (arr[i] > sl && arr[i] < c) {
              sl = arr[i]; 
          }
      }
      return (sl == INT_MIN) ? -1 : sl;
      }
  };