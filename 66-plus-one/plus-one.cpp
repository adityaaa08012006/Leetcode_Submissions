class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int unitdigit= nums.back();
        int size= nums.size();
        int tempsize= nums.size()-1;
        if(unitdigit==9 && nums.size()==1)
        {
            nums.back()=1;
            nums.push_back(0);
        }
        else if(unitdigit==9)
        {
            while(unitdigit==9 && tempsize>0)
            {
                nums[tempsize]=0;
                tempsize=tempsize-1;
                unitdigit= nums[tempsize];
            }
            if(tempsize==0 && unitdigit==9)
            {
                nums[tempsize]=1;
                nums.push_back(0);
            }
            else
            {
                nums[tempsize]= nums[tempsize]+1;
            }
        }
        else
        {
            nums[size-1]= nums[size-1]+1;
        }
        return nums;
    }
};