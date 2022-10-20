class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int nn= nums.size();
      for(int i=n;i<nn;i++)
      {
          nums[i]=(nums[i] * 1024) + nums[i - n];
      }
        int index=0;
        for(int i=n;i<nn;i++,index+=2)
        {
            nums[index]=nums[i]%1024;
            nums[index+1]=nums[i]/1024;
        }
        return nums;
    }
};