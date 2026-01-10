class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int beg=0,end=nums.size()-1;
        int mid,minidx;


        while(beg<=end)
            {
                mid=beg+(end-beg);
                if(nums[mid]==target)
                    return mid;

                else  if(nums[mid]>target)
                    end=mid-1;
                else
                    beg=mid+1;
                
                if(nums[mid]>target)
                    minidx=mid;
            } 

        if(minidx==0) 
            return mid;

        return mid+1;    
    }
};