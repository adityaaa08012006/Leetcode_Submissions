class Solution {
public:
    bool isHappy(int n) {
        int temp= n;
        int newnum=0;
        int i=0;
        unordered_map<int,int> mp;
        while(temp!=1)
        {
            while(temp!=0)
            {
                newnum= newnum+((temp%10)*(temp%10));
                temp= temp/10;
            }
        temp= newnum;
        newnum=0;
        if(mp.find(temp)==mp.end())
        {
            mp[temp]=i;
            i++;
        }
        else
        {
            return false;
        }
        }
        return true;
    }
};