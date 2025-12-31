class Solution {
public:
    void rotate(vector<int>& a, int k) 
    {
        vector<int> b(a.size());

        for(int i=0;i<a.size();i++)
            {
                b[(i+k)%(a.size())]=a[i];
            }
        a.assign(b.begin(),b.end());
    }        
               
};
