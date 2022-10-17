class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int n = prices.size();
        int mini=INT_MAX;;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];
            }
            else if(prices[i]-mini>maxi)
            {
                maxi=prices[i]-mini;
            }
        }
        return maxi;
    }
};