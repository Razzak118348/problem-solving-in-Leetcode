#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =0,bestBuy = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxProfit=max(maxProfit,prices[i]-bestBuy);

            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};

int main(){
 Solution sol;
 vector<int> arr={8,1,5,6,2,3};
 int profit = sol.maxProfit(arr);
cout<<profit;
}