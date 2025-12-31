class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int begin=0,end=arr.size(),mid;
        while(end>=begin)
            {
                mid=(begin+end)/2;
                if(arr[mid]>arr[mid-1]&&arr[mid+1]<arr[mid])
                return mid;

                if(arr[mid]>arr[mid-1])
                begin=mid;

                if(arr[mid]<arr[mid-1])
                end=mid;
            }
        return -1;
    }
};