class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int firstoccurrence=-1;
        if(needle.size()>haystack.size())
        {
            return firstoccurrence;
        }
        while(i<haystack.size() && j<needle.size())
        {
            if(j==0 && haystack[i]==needle[j])
            {
                firstoccurrence= i;
                i=i+1;
                j=j+1;
            }
            else if(haystack[i]==needle[j])
            {
                i=i+1;
                j=j+1;
            }
            else
            {
                if(firstoccurrence!=-1)
                {
                    i= firstoccurrence+1;
                }
                else
                {
                    i= i+1;
                }
                j=0;
                firstoccurrence=-1;
            }
        }
        if(j==needle.size())
        {
            return firstoccurrence;
        }
        else
        {
            return -1;
        }
    }
};