class Solution {
public:
    int mySqrt(int x) {
       int i=1;
       while((x/i)>=i)
       {
        i=i+1;
       }
       return i-1;
    }
};