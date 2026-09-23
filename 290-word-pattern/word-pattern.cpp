class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char> mp;
        unordered_map<char, string> mp1;
        int count=0;
        int i=0;
        while(i<s.size() && count<pattern.size())
        {
            string temp="";
            while(i<s.size() && s[i]!=' ')
            {
                temp= temp+s[i];
                i++;
            }
            i++;
            if(mp.find(temp)!=mp.end())
            {
                if(mp[temp]!=pattern[count])
                {
                    return false;
                }
            }
            else
            {
                mp[temp]= pattern[count];
            }
            if(mp1.find(pattern[count])!=mp1.end())
            {
                if(mp1[pattern[count]]!=temp)
                {
                    return false;
                }
            }
            else
            {
                mp1[pattern[count]]= temp;
            }
            count++;
        }
        if(count!=pattern.size() || i<s.size())
        {
            return false;
        }
        return true;
    }
};
