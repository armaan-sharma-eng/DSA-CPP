class Solution {
public:
    int reverse(int N) 
    {
        if(N==0)
            return 0;


        int r=N%10;
        int rcv=reverse(N/10);
        int count=0;
        while(N!=0)
            {
                count++;
                N/=10;
            }
        long res=r*pow(10,count-1)+rcv;
        if(res>=pow(2,31)||res<=-pow(2,31))
            return 0;
            return res;
    }
};