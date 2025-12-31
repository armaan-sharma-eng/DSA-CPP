class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            {
                if(mp.find(target-nums[i])!=mp.end())
                    {
                        nums.clear();
                        nums.push_back(i);
                        nums.push_back(mp[target-nums[i]]);
                        break;
                    }

                mp[nums[i]]=i;
            }
        return nums;
    }
};