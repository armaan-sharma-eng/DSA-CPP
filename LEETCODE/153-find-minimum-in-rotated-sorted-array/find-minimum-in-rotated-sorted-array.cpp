class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        auto mn=min_element(nums.begin(),nums.end());
        int midx=mn-nums.begin();
        return nums[midx];        
    }
};