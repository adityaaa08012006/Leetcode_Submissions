class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string finalanswer="";
        int j=0;
        int size= strs.size()-1;
        int tempsize;
        if(strs.size()==0)
        {
            return finalanswer;
        }
        if(strs.size()==1)
        {
            finalanswer= strs[0];
            return finalanswer;
        }
        sort(strs.begin(),strs.end());
        if(strs[0].size()>strs[size].size())
        {
            tempsize= strs[size].size();
        }
        else
        {
            tempsize= strs[0].size();
        }
            while(j<tempsize && strs[0][j]== strs[size][j])
            {
                if(strs[0]=="")
                {
                    return finalanswer;
                }
                finalanswer= finalanswer+strs[0][j];
                j=j+1;
            }
        return finalanswer;
    }
};