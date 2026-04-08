class Solution {
public:
    int countEven(int num) 
    {
        int count=0;
        for(int i=2;i<=num;i++)
        {
            if(check_sum(i))
                count++;
        }
        return count;
    }

    bool check_sum(int n)
    {
        int sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        if(sum%2==0)
            return true;

        return false;
    }
};