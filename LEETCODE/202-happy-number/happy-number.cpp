class Solution {
public:
    bool isHappy(int n) 
    {
        vector<int> ary;
        int r,ss=0;
        while(true)
        {
            while(n!=0)
            {
                r=n%10;
                ss=ss+r*r;
                n=n/10;
            }
            if(ss==1)
                return true;
            if(find(ary.begin(),ary.end(),ss)!=ary.end())
                return false;

            ary.push_back(ss);
            n=ss;
            ss=0;
        }
        return true;
    }
};