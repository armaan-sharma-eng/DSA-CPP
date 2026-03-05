class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string> ary;
        string t="";
        int i=0;
        while(s[i]==' ')
        i++;

        int j=s.size()-1;
        while(s[j]==' ')
            j--;

        while(i<=j)
        {
            if(s[i]!=' ')
                t+=s[i];

            if(s[i]==' ')
            {
                if(t!="")
                ary.push_back(t);

                t="";
                // int k;
                // if(ary.size()!=0)
                // {
                //     k=ary.size()-1;
                //     if(ary[k]==" ")
                //         continue;
                // }
                // ary.push_back(t);
                // t="";
            }

            i++;

        }
        if(t!="")
            ary.push_back(t);
        t="";
        for(int i=ary.size()-1;i>=0;i--)
        {
            t+=ary[i];
            if(i!=0)
                t+=" ";
        }
        return t;
    }
};