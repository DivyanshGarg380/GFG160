/*
Given an integer array arr[]. Find the number of triangles that can be formed with three different array elements as lengths of three sides of the triangle. 
A triangle with three given sides is only possible if sum of any two sides is always greater than the third side.
*/
class Solution {
    public:
      // Function to count the number of possible triangles.
      int countTriangles(vector<int>& arr) {
          // code here
          int n=arr.size();
          sort(arr.begin(),arr.end());
          int count = 0;
          for(int k = n-1;k>=2;k--){
              int i=0,j=k-1;
              while(i<j){
                  if(arr[i]+arr[j]>arr[k]){
                      count += (j-i);
                      j--;
                  }
                  else i++;
              }
          }
          return count;
      }
  };
  