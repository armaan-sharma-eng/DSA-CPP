class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int begin=0,end=nums.size()-1,mid;
        while(begin<=end)
            {
                mid=(begin+end)/2;
                if(nums[mid]==target)
                return mid;

                if(nums[mid]>target)
                end=mid-1;
                
                if(nums[mid]<target)
                begin=mid+1;
            }    
        return -1;    
    }
};