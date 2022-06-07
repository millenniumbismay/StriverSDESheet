class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p_t;
        vector<int> temp;
        temp.push_back(1);
        p_t.push_back(temp);
        
        if(numRows >= 2)
        {
            vector<int> temp;
            temp.push_back(1);
            temp.push_back(1);
            p_t.push_back(temp);
        }
        
        for(int i=3; i<=numRows; i++)
        {
            vector<int> curr;
            vector<int> prev;
            prev = p_t[i-2];
            for(int i=0; i<prev.size(); i++)
                cout<<prev[i]<<" ";
            cout<<endl;
            curr.push_back(1);
            
            
            for(int j=0; j<i-2; j++)
            {
                curr.push_back(prev[j] + prev[j+1]);
            }
            
            curr.push_back(1);
            
            p_t.push_back(curr);
        }
        
        return p_t;
    }
};