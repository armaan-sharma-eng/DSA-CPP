class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int x=0;

        for(auto val:operations)
        {
            if(val[0]=='-' || val[val.length()-1]=='-')
                x-=1;

            else
                x+=1;
        }
        return x;
    }
};