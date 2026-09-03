class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size=1;
        int majority;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                size++;
            }
            else
            {
                size=1;
            }
            if(size>nums.size()/2)
            {
                majority= nums[i];
            }
        }
        return majority;
    }
};