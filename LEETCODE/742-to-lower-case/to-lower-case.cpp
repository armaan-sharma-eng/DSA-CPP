class Solution {
public:
    string toLowerCase(string s) 
    {
        string t="";
        for(auto val:s)
        {
            if(val>='A' && val<='Z')
                t+=val+32;
            
            else
                t+=val;
        }
        return t;
    }
};