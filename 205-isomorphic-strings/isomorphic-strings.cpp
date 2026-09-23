class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> so;
        unordered_map<char, char> ro;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(so.find(s[i])!=so.end())
            {
                if(so[s[i]]!=t[i])
                {
                    return false;
                }
            }
            else
            {
                so[s[i]]=t[i];
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(ro.find(t[i])!= ro.end())
            {
                if(ro[t[i]]!=s[i])
                {
                    return false;
                }
            }
            else
            {
                ro[t[i]]=s[i];
            }
        }
        return true;
    }
};