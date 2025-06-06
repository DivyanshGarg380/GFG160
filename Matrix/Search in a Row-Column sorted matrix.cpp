/*
Given a 2D integer matrix mat[][] of size n x m, where every row and column is sorted in increasing order and a number x, 
the task is to find whether element x is present in the matrix.
*/
class Solution {
    public:
      bool matSearch(vector<vector<int>> &mat, int x) {
          // your code here
          for(int i=0;i<mat.size();i++){
              for(int j=0;j<mat[i].size();j++){
                  if(mat[i][j]==x) return true;
              }
          }
          return false;
      }
  };