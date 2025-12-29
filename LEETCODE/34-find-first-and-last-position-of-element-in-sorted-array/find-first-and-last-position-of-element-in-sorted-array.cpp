class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int begin=0,end=nums.size()-1,mid,pos=-1;
        while(begin<=end)
            {
                mid=begin-(begin-end)/2;
                if(target==nums[mid])
                    {
                        pos=mid;
                        break;
                    }
                else if(nums[mid]>target)
                    {
                        end=mid-1;
                    }
                else
                    {
                        begin=mid+1;
                    }
            }
        int fi=-1,li=-1; 
        
        for(int i=pos;i>=0;i--)
            {
                fi=i;
                if(nums[pos]!=nums[i])
                {
                    fi=i+1;
                    break;
                }
            }
        for(int i=pos;i<nums.size();i++)
            {
                li=i;
                if(nums[pos]!=nums[i])
                {
                    li=i-1;
                    break;
                }
            }
        nums.clear();
        nums.push_back(fi);
        nums.push_back(li);
        return nums;
    }
};