#include<iostream>
#include<vector>
using namespace std;




 //brute force: O(n^2)

    class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max = INT_MIN;
        int sz = prices.size();

        for(int i=0; i< sz; i++){
            for(int j= i+1; j<sz;j++){
                int sum = -prices.at(i) + prices.at(j);
                if(sum>max){
                    max = sum;
                }
                
            }
        }
        if(max>0){
            return max;
        }
        else{
            return 0;
        }



        
    }
};


//optimised : O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0];
        int maxProfit = 0;
        
        for(int i=1; i<prices.size();i++){
            maxProfit = max(maxProfit, prices[i]- bestBuy);
            bestBuy= min (bestBuy, prices[i]);
        }

        return maxProfit;
    }
};