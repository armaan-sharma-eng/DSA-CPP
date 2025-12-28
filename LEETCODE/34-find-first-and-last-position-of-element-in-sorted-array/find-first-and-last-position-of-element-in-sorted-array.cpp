class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int i;
        for(i=0;i<nums.size();i++)
            {
                if(target==nums[i])
                break;
            }
        if(i==nums.size())
            {
                nums.clear();
                nums.push_back(-1);
                nums.push_back(-1);
                return nums;
            }
        int fi,li;
        fi=i;    
        int j;
        for(j=i;j<nums.size();j++)
            {
                if(nums[j]!=nums[i])
                break;
            }
        li=j-1;
        nums.clear();
        nums.push_back(fi);
        nums.push_back(li);
        return nums;
        
    }
};