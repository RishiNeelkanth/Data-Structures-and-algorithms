class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
     //sort(nums.begin(),nums.end());
       // int n=nums.size();
        //return (nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        int mini1=INT_MAX;
        int mini2=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi1)
            {
                maxi2=maxi1;
                maxi1=nums[i];
            }
            else if(nums[i]>maxi2)
            {
                maxi2=nums[i];
            }
            if(nums[i]<mini1)
            {
                mini2=mini1;
                mini1=nums[i];
            }
            else if(nums[i]<mini2)
            {
                mini2=nums[i];
            }
        }
        
        return (maxi1*maxi2)- (mini1*mini2);
    }
};