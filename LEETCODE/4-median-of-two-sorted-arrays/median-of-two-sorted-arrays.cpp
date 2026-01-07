class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int m=nums1.size();
        int n=nums2.size();
        vector <int> ary;
        int i=0,j=0;
        while(i<m&&j<n)
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
        if(i<m)
            {
                for(int k=i;k<m;k++)
                    ary.push_back(nums1[k]);
            }
        else
            {
                for(int k=j;k<n;k++)
                    ary.push_back(nums2[k]);
            }

        if(ary.size()%2==1)
            return ary[ary.size()/2];
        else
            return (float)(ary[(ary.size()/2)]+ary[ary.size()/2-1])/2;        
    }
};