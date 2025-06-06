/*
You are given an array of integer arr[] where each number represents a vote to a candidate. 
Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 
Note: The answer should be returned in an increasing format.
*/
class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          // Your code goes here.
          int n = arr.size();
          unordered_map<int,int>freq;
          for(int num : arr){
              freq[num]++;
          }
          vector<int>res;
          for(auto it : freq){
              if(it.second > n/3) res.push_back(it.first);
          }
          sort(res.begin(),res.end());
          return res;
      }
  };