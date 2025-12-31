class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> ary;
        for(auto value:nums)
            {
                if(value!=val)
                ary.push_back(value);
            }
        nums.clear();
        for(auto value:ary)
            {
                nums.push_back(value);
            }
        return ary.size();    
    }
};