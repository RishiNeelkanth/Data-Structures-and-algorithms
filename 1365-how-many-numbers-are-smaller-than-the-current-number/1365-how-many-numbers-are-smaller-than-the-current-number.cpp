class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> snums=nums;
        sort(snums.begin(),snums.end());
        for(int i=n-1;i>=0;i--)
        {
            mp[snums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=mp[nums[i]];
        }
        return nums;
    }
};