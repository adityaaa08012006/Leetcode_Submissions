class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit=0;
        if(nums.size()==0 || nums.size()==1)
        {
            return profit;
        }
        int min= nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]<min)
            {
                min= nums[i];
            }
            if(profit<nums[i]-min)
            {
                profit= nums[i]-min;
            }
        }
        return profit;
    }
};