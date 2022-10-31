class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(auto it : nums)
        {
            sum+=it;
            maxi=max(maxi,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};

//class Solution {
//public:
    //int maxSubArray(vector<int>& nums) {
        //int curMax = 0, maxTillNow = INT_MIN;
        //for(auto c : nums)
           // curMax = max(c, curMax + c),
            //maxTillNow = max(maxTillNow, curMax);
        //return maxTillNow;
    //}
//};