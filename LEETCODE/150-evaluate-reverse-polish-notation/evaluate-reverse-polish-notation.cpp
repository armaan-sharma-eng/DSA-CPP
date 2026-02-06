class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> stk;
        int ans;
        for(auto val:tokens)
        {
            if(isdigit(val[0])||val.size()>1&&val[0]=='-')
            {
                stk.push(stoi(val));
            }
            
            else
            {
                int y=stk.top();
                stk.pop();
                int x=stk.top();
                stk.pop();
                switch (val[0])
                {
                    case '+':
                    ans=x+y;
                    break;
                    
                    case '-':
                    ans=x-y;
                    break;
                    
                    case '*':
                    ans=x*y;
                    break;
                    
                    case '/':
                    ans=x/y;
                    break;
                    
                    case '^':
                    ans=pow(x,y);
                }
                stk.push(ans);
            }
        }
        ans=stk.top();
        stk.pop();
        return ans;
        
    }
};