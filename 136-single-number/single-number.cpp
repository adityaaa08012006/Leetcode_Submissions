class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int i=0;
        sort(nums.begin(),nums.end());
        while(nums[i]==nums[i+1] && i+2<nums.size())
        {
            i=i+2;
        }
        return nums[i];
    }
};