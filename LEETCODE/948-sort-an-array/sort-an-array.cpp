class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        map <int,int> mp;
        for(auto val:nums)
            mp[val]++;

        vector <int> nums1;
        for(auto val:mp)
            {   
                for(int i=0;i<val.second;i++)
                nums1.push_back(val.first);
            }
        return nums1;
    }
};