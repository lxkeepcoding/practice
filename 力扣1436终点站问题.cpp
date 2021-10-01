class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        vector<string>start;
        vector<string>end;
        for(int i=0;i<paths.size();i++)
        {
            start.push_back(paths[i][0]);
            end.push_back(paths[i][1]);
        }
        string goal;
        for(int j=0;j<end.size();j++)
        {
            for(int k=0;k<start.size();k++)
            {
                if(start[k]==end[j])
                {
                    goto part;
                }
            }
            goal=end[j];
            part:;
        }
        return goal;
    }
};