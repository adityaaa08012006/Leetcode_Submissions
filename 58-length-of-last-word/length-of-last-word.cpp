class Solution {
public:
    int lengthOfLastWord(string s) {
        int i= s.size()-1;
        int count=0;
        while(i>=0 && s[i]==' ')
        {
            i=i-1;
        }
        while(i>=0)
        {
            if(s[i]==' ')
            {
                return count;
            }
            else
            {
                count= count+1;
                i=i-1;
            }
        }
        return count;
    }
};