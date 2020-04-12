class Solution {
public:
    int maxProfit(vector<int>& prices){
        int x=0,y=prices.size();
        for(int i=1;i<y;i++){
            if(prices[i]>prices[i-1]){
                x+=(prices[i]-prices[i-1]);
            }
        }
        return x;
    }
};
