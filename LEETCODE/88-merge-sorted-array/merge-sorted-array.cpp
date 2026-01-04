class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
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
        nums1.clear();
        nums1=ary;
    }
};