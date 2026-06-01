class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnpr = INT_MAX, mxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mnpr){
                mnpr=prices[i];
            }
            mxprofit=max(mxprofit,prices[i]-mnpr);
        }
         return mxprofit;
    }
};
