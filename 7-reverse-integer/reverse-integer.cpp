class Solution {
public:
    int reverse(int x) {
        int revnum=0;
        int q=1;
        int r;
        while(q!=0)
        {
            r= x%10;
            q= x/10;
            x= q;
            if(revnum>(INT_MAX/10) || revnum<(INT_MIN/10))
            {
                return 0;
            }
            else if((revnum)==INT_MAX/10 && r>7)
            {
                return 0;
            }
           if (revnum == INT_MIN/10 && r < -8)
           {
                return 0;
           }
            revnum= revnum*10+r;
        }
        return revnum;  
    }
};