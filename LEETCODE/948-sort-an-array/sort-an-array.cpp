class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        map <int,int> mp;
        for(auto val:nums)
            mp[val]++;

        nums.clear();
        for(auto val:mp)
            {   
                for(int i=0;i<val.second;i++)
                nums.push_back(val.first);
            }
        return nums;
    }
};