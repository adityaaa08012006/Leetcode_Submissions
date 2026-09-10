class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j= s.size()-1;
        if(s.size()==1)
        {
            return true;
        }
        while(i<j)
        {
            while(i<j && !((s[i]>='A' && s[i]<='Z')
            ||(s[i]>='a' && s[i]<='z')
            ||(s[i]>='0' && s[i]<='9')))
            {
                i++;
            }

            while(i<j && !((s[j]>='A' && s[j]<='Z')
            ||(s[j]>='a' && s[j]<='z')
            ||(s[j]>='0' && s[j]<='9')))
            {
                j--;
            }

            if(s[i]>='A' && s[i]<='Z')
                {
                    s[i]= s[i]+32;
                }
            if(s[j]>='A' && s[j]<='Z')
                {
                    s[j]= s[j]+32;
                }

            if(s[i]!=s[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
    return true;
    }
};