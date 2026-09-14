class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if(strs.size()==0)
       {
        return "";
       }
       if(strs.size()==1)
       {
        return strs[0];
       }
       sort(strs.begin(), strs.end());
       int i= 0;
       int size= strs.size()-1;
       string finalanswer="";
       if(strs[0]==strs[size])
       {
        finalanswer= strs[0];
        return finalanswer;
       }
       while(strs[0][i]==strs[size][i])
       {
            finalanswer= finalanswer + strs[0][i];
            i= i+1;
       }
       return finalanswer;
    }
};