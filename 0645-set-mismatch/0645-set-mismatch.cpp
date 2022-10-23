class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n+1,0);
        vector<int> a;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
            
        }
        int res=0;
        int temp=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                temp=nums[i];
            }
            
        }
        for(int i=1;i<=n;i++)
        {
            if(ans[i]==0)
            {
                res=i;
            }
        }
        
            a.push_back(temp);
            a.push_back(res);
        
        return a;
    }
};