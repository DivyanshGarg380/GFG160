/*
Given a square matrix mat[][] of size n x n. 
The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. 
*/
class Solution {
    public:
      // Function to rotate matrix anticlockwise by 90 degrees.
      void rotateby90(vector<vector<int>>& mat) {
          // code here
          int n = mat.size();
          for(int i=0;i<n;i++){
              for(int j=i+1;j<n;j++){
                  swap(mat[i][j],mat[j][i]);
              }
          }
          for(int i=0;i<n;i++){
              int top = 0 , bottom = n-1;
              while(top<bottom){
                  swap(mat[top][i],mat[bottom][i]);
                  top++;
                  bottom--;
              }
          }
      }
  };