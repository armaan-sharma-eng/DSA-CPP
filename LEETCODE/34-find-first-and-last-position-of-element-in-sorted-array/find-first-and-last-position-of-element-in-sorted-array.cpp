class Solution 
    {
        public:
            vector<int> searchRange(vector<int>& nums, int target) 
                {
                    vector<int> aryy;
                    aryy.push_back(firstIdx(nums,target));
                    aryy.push_back(lastIdx(nums,target));
                    return aryy;
                }

            int firstIdx(vector<int >arr,int target)
                {
                    int pos=-1,mid;
                    int begin=0;
                    int end=arr.size()-1;
                    while(begin<=end)
                        {
                            mid=begin+(end-begin)/2;
                            if(target==arr[mid])
                                {
                                    pos=mid;
                                    end=mid-1;
                                }

                            else if(target<arr[mid])
                                end=mid-1;  
                            else
                                begin=mid+1;
                        }
                    return pos;
                }

            int lastIdx(vector <int >arr,int target)
                {
                    int pos=-1,mid;
                    int begin=0;
                    int end=arr.size()-1;
                    while(begin<=end)
                        {
                            mid=begin+(end-begin)/2;
                            if(target==arr[mid])
                                {
                                pos=mid;
                                begin=mid+1;
                                }

                            else if(target<arr[mid])
                                end=mid-1;  
                            else
                                begin=mid+1;
                        }
                    return pos;
                }
    };      

