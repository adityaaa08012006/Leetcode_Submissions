class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int temp=100000000000000;
        vector<int> nums3;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]>nums2[j])
            {
                j++;
            }
            else if(nums1[i]==nums2[j] && nums1[i]!=temp)
            {
                nums3.push_back(nums1[i]);
                temp=nums1[i];
                i++;
                j++;
            }
            else if(nums1[i]==nums2[j] && nums1[i]==temp)
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
    return nums3;
    }
};