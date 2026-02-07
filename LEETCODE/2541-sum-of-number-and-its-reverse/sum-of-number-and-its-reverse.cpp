class Solution {
public:

    bool sumOfNumberAndReverse(int num) 
    {
        for(int j=0;j<=num;j++)
        {
            int i=j;
            int rev=0;
            while(i!=0)
            {
                int r=i%10;
                rev=rev*10+r;
                i=i/10;
            }
            if(j+rev==num)
                return true;
        }
        return false;
        
    }
};