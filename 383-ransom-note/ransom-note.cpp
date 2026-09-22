class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int i=0;
        int j=0;
        int count=0;
        if(ransomNote.size()==0 && magazine.size()==0)
        {
            return true;
        }
        else if(ransomNote.size()!=0 && magazine.size()==0)
        {
            return true;
        }
        else if(ransomNote.size()==0 && magazine.size()!=0)
        {
            return false;
        }
        while(i<ransomNote.size() && j<magazine.size())
        {
            if(ransomNote[i]==magazine[j])
            {
                i++;
                j++;
                count++;
            }
            else
            {
                j++;
            }
        }
        if(count==ransomNote.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};