class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int product=1;
        if(n<1)
        {
            return ans;
        }
        for(int i=0;i<n;i++)
        {
            product*=nums[i];
            ans[i]=product;
        }
        product=1;
        for(int i=n-1;i>0;i--)
        {
            ans[i]=product*ans[i-1];
            product*=nums[i];
        }
        ans[0]=product;
        return ans;
    }
};