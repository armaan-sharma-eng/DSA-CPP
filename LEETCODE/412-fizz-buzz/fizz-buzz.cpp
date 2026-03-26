class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> ary(n);
        for(int i=0;i<n;i++)
        {
            if((i+1)%15==0)
                ary[i]="FizzBuzz";
            else if((i+1)%3==0)
                ary[i]="Fizz";

            else if((i+1)%5==0)
                ary[i]="Buzz";
            else
                ary[i]=to_string(i+1);
        }
        return ary;
    }
};