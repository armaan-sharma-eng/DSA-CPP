class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector <int> ary;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
            {
                if(nums1[i]<nums2[j])
                    {
                        ary.push_back(nums1[i]);
                        i++;
                    }
                    
                else
                    {
                        ary.push_back(nums2[j]);
                        j++;
                    }
            }
        if(i<nums1.size())
            {
                for(int k=i;k<nums1.size();k++)
                    ary.push_back(nums1[k]);
            }
        else
            {
                for(int k=j;k<nums2.size();k++)
                    ary.push_back(nums2[k]);
            }

        if(ary.size()%2==1)
            return ary[ary.size()/2];
        else
            return (float)(ary[(ary.size()/2)]+ary[ary.size()/2-1])/2;        
    }
};