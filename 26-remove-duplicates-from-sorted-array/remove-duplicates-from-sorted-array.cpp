class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int k=1;
        while(i+1<nums.size())
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
            }
            else
            {
                i=i+1;
                k=k+1;
            }
        }
    return k;
    }
};