class Solution {
public:
    int mirrorDistance(int n) \
    {
        return abs(n-rev(n));        
    }

    int rev(int n)
    {
        int reverse=0;
        while(n!=0)
        {
            int r=n%10;
            reverse=reverse*10+r;
            n/=10;
        }
        return reverse;
    }
};