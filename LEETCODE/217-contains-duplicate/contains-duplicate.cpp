class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set <int> st;
        for(auto val:nums)
            {
                if(st.find(val)==st.end())
                    st.insert(val);

                else
                    return true;
            }
        return false;
    }
};