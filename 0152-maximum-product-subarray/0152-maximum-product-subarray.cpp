class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int l=1,r=1,maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
        l=(l? l : 1) * nums[i];
            r=(r ? r : 1) * nums[n-1-i];
            maxi=max(maxi,max(l,r));
        }
    return maxi;
    }
};