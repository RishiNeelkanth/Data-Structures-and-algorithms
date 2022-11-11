class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area =0;
        int ans=0;
        int mini=INT_MAX;
        int left=0;
        int right=n-1;
        while(left<right)
        {
            mini = min(height[left],height[right]);
            area=(mini*(right-left));
            ans=max(ans,area);
            if(height[left]<height[right])
            {
             left++;   
            }
            else
            {
                right--;
            }
        }
        return ans;
    }
};