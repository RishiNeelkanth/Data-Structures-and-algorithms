class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int temp=0;
        for(int i=0;i<n;i+=2)
        {
            temp=nums[i];
            while(temp>0)
            {
                ans.push_back(nums[i+1]); 
                temp--;
            }
        }
        return ans;
    }
};