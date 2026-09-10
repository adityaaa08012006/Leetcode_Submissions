class Solution {
public:
    bool isPalindrome(int x) {
        int q=1;
        int r;
        int revnum=0;
        int temp=x;
        while(q!=0)
        {
            r=x%10;
            q=x/10;
            x=q;
            if(revnum>(INT_MAX/10))
            {
                return false;
            }
            if(revnum<(INT_MIN/10))
            {
                return false;
            }
            revnum=revnum*10+r;
        }
        if(temp<0)
        {
            return false;
        }
        else if(revnum==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};