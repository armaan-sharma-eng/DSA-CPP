class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i=0,j;
        for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                    break;
                if(j==nums.size()-1)
                    {
                        i++;
                        j=i;
                    }
            }
            nums.clear();
            nums.push_back(i);
            nums.push_back(j);
            return nums;
    }
};