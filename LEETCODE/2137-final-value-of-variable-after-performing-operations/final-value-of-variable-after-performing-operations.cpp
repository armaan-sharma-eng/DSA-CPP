class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int x=0;

        for(auto val:operations)
        {
            if(val=="--X" || val=="X--")
                x-=1;

            else
                x+=1;
        }
        return x;
    }
};