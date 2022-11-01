class Solution {
public:
    int findMin(vector<int>& nums) {
      
        int s=0;
        int e=nums.size()-1;
        int ans=INT_MAX;
        if(nums.size()==1) return nums[0];
        if(nums[0]<nums.back()) return nums[0];
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[0])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
                ans=min(ans,nums[mid]);
            }
        }
        return ans;
    }
};