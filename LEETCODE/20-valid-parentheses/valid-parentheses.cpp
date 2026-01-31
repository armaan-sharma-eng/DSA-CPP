class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;

        for (char brac : s) 
        {
            if (brac == '(' || brac == '{' || brac == '[') {
                st.push(brac);
            } 
            else 
            {
                if (st.empty())
                    return false;

                char top = st.top();
                if ((brac == ')' && top == '(') || 
                    (brac == '}' && top == '{') || 
                    (brac == ']' && top == '[')) {
                    st.pop();
                } 
                else 
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};