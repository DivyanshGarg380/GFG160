/*
Given two sorted arrays a[] and b[] and an element k, 
the task is to find the element that would be at the kth position of the combined sorted array.
*/
class Solution {
    public:
      int kthElement(vector<int>& a, vector<int>& b, int k) {
          // code here
          int m = a.size();
          int n = b.size();
          for(int i=0;i<n;i++){
              a.push_back(b[i]);
          }
          sort(a.begin(),a.end());
          return a[k-1];
      }
  };