class Solution {
public:
    string convertToTitle(int columnNumber) {
        unordered_map<int, char> mp;
        for(int i = 0; i < 26; i++)
        {
            mp[i] = 'A' + i;
        }
        string finalanswer="";
        while(columnNumber>0)
        {
            columnNumber= columnNumber-1;
            finalanswer= finalanswer+ mp[columnNumber%26];
            columnNumber= columnNumber/26;
        }
        reverse(finalanswer.begin(), finalanswer.end());
        return finalanswer;
    }
};