class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> final;
        sort(nums.begin(), nums.end());
        int j = 0;
        int i = 1;
        
        while(j < nums.size()) {
            if (j > 0 && nums[j] == nums[j - 1]) {
                j++;
            }
            else if (nums[j] != i) {
                final.push_back(i);
                i++;
            }
            else {
                i++;
                j++;
            }
        }
        while(i <= nums.size()) {
            final.push_back(i);
            i++;
        }
        
        return final;
    }
};