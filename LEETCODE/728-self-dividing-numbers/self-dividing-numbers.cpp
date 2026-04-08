class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> nums;
        for (int i=left;i<=right;i++)
        {
            if(check_nums(i)==true)
                nums.push_back(i);
        }
        return nums;
    }

    bool check_nums(int n)
    {
        int r;
        int n1=n;
        while(n1!=0)
        {
            r=n1%10;
            if(r==0)
                return false;
            if(n%r!=0)
                return false;

            n1/=10;
        }
        return true;
    }
};