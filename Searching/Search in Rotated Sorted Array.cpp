/*
Given a sorted and rotated array arr[] of distinct elements, the task is to find the index of a target key. 
Return -1 if the key is not found.
*/
class Solution {
    public:
      int search(vector<int>& arr, int key) {
          // Code Here
          for(int i=0;i<arr.size();i++){
              if(arr[i]==key) return i;
          }
          return -1;
      }
  };
  