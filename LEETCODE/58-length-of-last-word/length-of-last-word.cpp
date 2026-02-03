class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        string last;
        int count=0,lastcount=0;
        for(auto val:s)
        {
            if(val==' ')
            {
                if(count!=0)
                lastcount=count;
                count=0;
            }    
            else
                count++;
        }
        if(count!=0)
            return count;

        return lastcount;
    }
};