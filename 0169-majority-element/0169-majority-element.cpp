class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int maxi=INT_MIN;
        int ans=0;
        for(auto it : mp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};