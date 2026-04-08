class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int count=0;
        unordered_set<char> st;
        for(auto ch:jewels)
            st.insert(ch);

        for(auto ch:stones)
            if(st.find(ch)!=st.end())
                count++;

        return count;
    }
};