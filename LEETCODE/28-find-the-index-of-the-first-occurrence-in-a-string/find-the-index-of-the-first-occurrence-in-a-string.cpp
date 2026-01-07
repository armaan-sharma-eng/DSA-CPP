class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int j=0;
        for(int i=0;i<haystack.length();i++)
            {
                if(haystack[i]==needle[j])
                    {
                        j++;
                        if(j==needle.length())
                            return i-needle.length()+1;
                    }
                else
                    {
                        i=i-j;
                        j=0;
                    }
            }
        return -1;
    }
};