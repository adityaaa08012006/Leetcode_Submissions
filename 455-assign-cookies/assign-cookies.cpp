class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        int i=0;
        int j=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        if(s.size()==0 || g.size()==0)
        {
            return 0;
        }
        while(i<g.size() && j<s.size())
        {
            if(s[j]>=g[i])
            {
                count= count+1;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
};