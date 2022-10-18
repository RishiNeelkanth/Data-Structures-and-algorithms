class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int lsum[n];
        int rsum[n];
        int sum=0;
        int nsum=0;
        if(n==1)
        {
            return 0;
        }
        if(n==2)
        {
            if(nums[0]==0)
            {
                return 1;
            }
            else if(nums[1]==0)
            {
                return 0;
            }
            return -1;
        }
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            rsum[i]=sum;
        }
        for(int i=n-1;i>=0;i--)
        {
            nsum+=nums[i];
            lsum[i]=nsum;
        }
        for(int i=0;i<n;i++)
        {
            if(lsum[i]==rsum[i])
            {
                return i;
            }
        }
        return -1;
    }
};