class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
     int ans=INT_MIN;
     int cur_Sum=0;

     for(int i=0;i<nums.size();i++)
     {
      cur_Sum+=nums[i];

      ans=max(ans,cur_Sum);

      if(cur_Sum<0) cur_Sum=0;
     }
     return ans;
    }
};