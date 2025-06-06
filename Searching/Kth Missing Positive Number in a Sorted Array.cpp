/*
Given a sorted array of distinct positive integers arr[], we need to find the kth positive number that is missing from arr[].  
*/
class Solution {
    public:
      int kthMissing(vector<int> &arr, int k) {
          // Your code goes here
          int current = 1 , i = 0;
          while(k>0){
              if(i<arr.size()&&arr[i]==current){
                  i++;
              }
              else{
                  k--;
                  if(k==0) return current;
          }
          current++;
          }
          return current;
      }
  };