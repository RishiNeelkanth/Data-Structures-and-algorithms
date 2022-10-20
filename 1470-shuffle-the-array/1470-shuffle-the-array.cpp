class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int nn= nums.size();
       vector<int> ans(nn);
        int l=0;
        int r=n;
        for(int i=0;i<nn;i++)
        {
            if(i%2==0)
            {
                ans[i]=nums[l];
                l++;    
            }
            if(i%2==1)
            {
                ans[i]=nums[r];
                r++;
            } 
        }
        return ans;
    }
};