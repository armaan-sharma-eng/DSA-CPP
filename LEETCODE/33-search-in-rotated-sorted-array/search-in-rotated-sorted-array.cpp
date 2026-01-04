class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        auto mn=min_element(nums.begin(),nums.end());
        auto midx=mn-nums.begin();
        int k=midx;

        sort(nums.begin(),nums.end());

        int begin=0,end=nums.size()-1;
        int mid,pos=-1;
        while(begin<=end)
            {
                mid=begin-(begin-end)/2;
                if(nums[mid]==target)
                    {
                        pos=mid;
                        break;
                    }
                else if(nums[mid]<target)
                    {
                        begin=mid+1;
                    }
                else
                    {
                        end=mid-1;
                    }
            }
            if(pos==-1)
                return -1;

            if(k+pos<nums.size())
                return pos+k;

            else
                return pos+k-nums.size();
    }
};