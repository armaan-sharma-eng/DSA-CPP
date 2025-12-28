class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        map<int,int> mp1;
        int count=0,mx=INT_MIN;
        for(auto val:nums)
            {
                mp1[val]++;
            }
        for(auto val:mp1)
            {
                if(mx<val.second)
                mx=val.second;
            }
        for(auto val:mp1)
            {
                if(val.second==mx)
                count+=val.second;
            }
        return count;
    }
};