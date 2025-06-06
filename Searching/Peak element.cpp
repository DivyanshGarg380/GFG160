/*
Given an array arr[] where no two adjacent elements are same, find the index of a peak element. 
An element is considered to be a peak if it is greater than its adjacent elements (if they exist).
If there are multiple peak elements, return index of any one of them. 
The output will be "true" if the index returned by your function is correct; otherwise, it will be "false".
Note: Consider the element before the first element and the element after the last element to be negative infinity.
*/
class Solution {
    public:
      int peakElement(vector<int> &arr) {
          // Your code here
          int low = 0 , high = arr.size()-1;
          while(low<high){
              int mid = low + (high-low)/2;
               if(arr[mid] < arr[mid+1]) low = mid + 1;
              else high = mid;
          }
          return low;
      }
  };