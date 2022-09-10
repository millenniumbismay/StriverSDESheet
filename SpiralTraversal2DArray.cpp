class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int total_ele = r*c;
        // printf("r: %d, c: %d, total_ele: %d\n", r, c, total_ele);
        
        vector<int> res;
        
        int up = 0;
        int left = 0;
        int right = c-1;
        int bottom = r-1;
        
        // printf("up: %d, left: %d, right: %d, bottom: %d\n", up, left, right, bottom);
        
        while(res.size() < total_ele)
        {
            // cout<<"----------"<<endl;
            //rightward
            for(int col = left; col<=right; col++)
                res.push_back(matrix[up][col]);
            up++;
            // cout<<"up: "<<up<<endl;
            
            if(res.size() == total_ele) break;
            //downward
            for(int row = up; row<=bottom; row++)
                res.push_back(matrix[row][right]);
            right--;
            // cout<<"right: "<<right<<endl;
            
            if(res.size() == total_ele) break;
            
            //leftward
            for(int col = right; col>=left; col--)
                res.push_back(matrix[bottom][col]);
            bottom--;
            // cout<<"bottom: "<<bottom<<endl;
            
            if(res.size() == total_ele) break;
            //upward
            for(int row = bottom; row>=up; row--)
                res.push_back(matrix[row][left]);
            left++;
            // cout<<"left: "<<left<<endl;
        }
        
        return res;
    }
};
