/*
Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. 
Do the mentioned change in the array in place.
Note: Consider the array as circular.
*/
class Solution {
    public:
      // Function to rotate an array by d elements in counter-clockwise direction.
      void rotateArr(vector<int>& arr, int d) {
          // code here
          int n = arr.size();
          d = d%n;
          reverse(arr,0,d-1);
          reverse(arr,d,n-1);
          reverse(arr,0,n-1);
      }
      void reverse(vector<int>&arr,int start,int end){
          while(start<end){
              swap(arr[start],arr[end]);
              start++;
              end--;
          }
      }
      
  };