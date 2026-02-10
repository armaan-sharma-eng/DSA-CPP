class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector <int> sqr;
        for(auto val:nums)
        {
            sqr.push_back(pow(val,2));
        }
        sort(sqr.begin(),sqr.end());
        return sqr;
    }
};