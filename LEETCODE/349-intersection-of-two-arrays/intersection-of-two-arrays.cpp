class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector <int> nums3;
        for(auto val:nums1)
            {
                if(find(nums2.begin(),nums2.end(),val)!=nums2.end())
                {
                    if(find(nums3.begin(),nums3.end(),val)==nums3.end())//found
                    nums3.push_back(val);
                }
                
            }

        return nums3;
    }
};