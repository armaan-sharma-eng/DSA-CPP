class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        stack<char> stk;
        for(auto val:s)
        {
            if(val>='A'&&val<='Z' || val>='a'&&val<='z')
                stk.push(val);
        }
        string t="";
        
        for(auto val:s)
        {
            if(val>='A'&&val<='Z' || val>='a'&&val<='z')           
            {
                if(!stk.empty())
                {
                    t+=stk.top();
                    stk.pop();                    
                }
            }
            else
                t+=val;
        }

        return t;
    }
};