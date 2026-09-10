class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int i=0;
        int numerical=0;
        int current;
        int next;
        while(i<s.size())
        {
            current= mp[s[i]];
            next= mp[s[i+1]];
            if(current<next)
            {
                numerical= numerical-current;
                i++;
            }
            else
            {
                numerical= numerical+current;
                i++;
            }
        }
        return numerical;
    }
};