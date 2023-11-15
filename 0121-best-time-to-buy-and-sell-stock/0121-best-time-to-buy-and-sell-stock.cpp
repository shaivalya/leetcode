class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int profit=0;
        int b;
        for(int i=0;i<prices.size();i++){
           if(prices[i]<min){
               min=prices[i];
           }
          b=prices[i]-min;
           if(b>profit){
             profit=b;
           }
        }
        return profit;
    }
    };
