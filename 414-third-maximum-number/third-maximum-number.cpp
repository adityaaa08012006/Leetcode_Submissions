class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=1;
        int i= nums.size()-1;
        int max= nums[i];
        int thirdmax= max;
        while(i>=0 && count<3)
        {
            if(nums[i]==thirdmax)
            {
                i--;
            }
            else
            {
                thirdmax= nums[i];
                count= count+1;
                i--;
            }
        }
        if(count==3)
        {
            return thirdmax;
        }
        else
        {
            return max;
        }
    }
};