class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]%2==1)
            {
                swap(nums[i],nums[j]);
            }
            else
                i++;
            if(nums[j]%2==0)
            {
                swap(nums[i],nums[j]);
            }
            else
                j--;
        }
        return nums;
    }
};