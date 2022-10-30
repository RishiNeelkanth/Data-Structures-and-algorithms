class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        int multi=1;
        int m=1;
        for(int i=0;i<n;i++)
        {
            multi=multi*nums[i];
            left[i]=multi;
        }
        for(int i=n-1;i>=0;i--)
        {
            m=m*nums[i];
            right[i]=m;
        }
        for(int i=1;i<n-1;i++)
        {
            nums[i]=left[i-1]*right[i+1];
        }
        nums[0]=right[1];
        nums[n-1]=left[n-2];
        return nums;
    }
};