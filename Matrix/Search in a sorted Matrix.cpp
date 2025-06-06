/*
Given a strictly sorted 2D matrix mat[][] of size n x m and a number x. 
Find whether the number x is present in the matrix or not.
Note: In a strictly sorted matrix, each row is sorted in strictly increasing order, 
and the first element of the ith row (i!=0) is greater than the last element of the (i-1)th row.
*/


class Solution {
    public:
      // Function to search a given number in row-column sorted matrix.
      bool searchMatrix(vector<vector<int>> &mat, int x) {
          // code here
          for(int i=0;i<mat.size();i++){
              for(int j=0;j<mat[i].size();j++){
                  if(mat[i][j]==x) return true;
              }
          }
          return false;
      }
  };