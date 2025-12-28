class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i;
        int j;
        for(i=0;i<nums.size();i++)
            {
                auto ptr=find(nums.begin()+(i+1),nums.end(),target-nums[i]);
                if(ptr!=nums.end())
                    {
                        j=ptr-nums.begin();
                        break;
                    }
            }
            nums.clear();
            nums.push_back(i);
            nums.push_back(j);
            return nums;
    }
};