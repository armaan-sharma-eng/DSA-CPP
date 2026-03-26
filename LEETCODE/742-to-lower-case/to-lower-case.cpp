class Solution {
public:
    string toLowerCase(string s) 
    {
        string t="";
        for(auto &val:s)
        {
            if(val>='A' && val<='Z')
                val+=32;
        }
        return s;
    }
};