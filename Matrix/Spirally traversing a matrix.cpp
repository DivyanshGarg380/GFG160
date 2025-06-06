/*
You are given a rectangular matrix mat[][] of size n x m, 
and your task is to return an array while traversing the matrix in spiral form.
*/
class Solution {
    public:
      vector<int> spirallyTraverse(vector<vector<int> > &mat) {
          // code here
          vector<int>ans;
          int row = mat.size();
          int col = mat[0].size();
          int startingRow = 0 , startingCol = 0;
          int endingRow = row - 1 , endingCol = col - 1;
          int total = row*col;
          int count = 0;
          while(count<total){
              for(int index = startingCol ; index <= endingCol && count < total; index++){
                  ans.push_back(mat[startingRow][index]);
                  count++;
              }
              startingRow++;
              for(int index = startingRow ; index <= endingRow && count < total ; index++){
                  ans.push_back(mat[index][endingCol]);
                  count++;
              }
              endingCol--;
              for(int index = endingCol ; index >= startingCol && count < total ; index--){
                  ans.push_back(mat[endingRow][index]);
                  count++;
              }
              endingRow--;
              for(int index = endingRow ; index >= startingRow && count < total; index-- ){
                  ans.push_back(mat[index][startingCol]);
                  count++;
              }
              startingCol++;
          }
          return ans;
      }
  };