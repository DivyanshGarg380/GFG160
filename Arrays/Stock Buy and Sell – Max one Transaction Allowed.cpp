/*
Given an array prices[] of length n, representing the prices of the stocks on different days. The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed.
Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.
Note: Stock must be bought before being sold.
*/

class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int min_price = INT_MAX;
          int max_price = 0;
          for( auto it : prices){
              min_price = min(min_price , it);
              max_price = max(max_price , it - min_price);
          }
          return max_price;
      }
  };
  