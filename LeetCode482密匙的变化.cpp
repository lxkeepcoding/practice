class Solution 
{
public:
    string licenseKeyFormatting(string s, int k) 
    {
        string ss;
        string sss;
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
            if(s[i]!='-')
            {
                sss.push_back(s[i]);
            }
        }
        int m=sss.size()%k;
        for(int i=0;i<sss.size();i++)
        {
            ss.push_back(sss[i]);
            if((i+1)%k==m&&i!=sss.size()-1)
            {
                ss.push_back('-');
            }
        }
        return ss;
    }
};