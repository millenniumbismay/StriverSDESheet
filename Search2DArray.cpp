class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Implementing double binary search
        //First we need binary search on the first columns, to know which row could have the value
        //Second we need binary search on the row found, to find the final value
        
        int r = matrix.size();
        int c = matrix[0].size();
        // cout<<r<<" "<<c<<endl;
        
        int l_c=0;
        int u_c=r-1;
        
        int target_r = 0;
        // int target_c;
        
        while(l_c<=u_c)
        {
            // cout<<"--------------"<<endl;
            int m_c = l_c+(u_c-l_c)/2;
            // cout<<l_c<<" "<<m_c<<" "<<u_c<<endl;
            if(matrix[m_c][0] == target) return true;
            else if(matrix[m_c][0] > target)
            {
                u_c = m_c - 1;
            }
            else if(matrix[m_c][0] < target)
            {
                target_r = m_c;
                l_c = m_c+1;
            }
        }
        
        // cout<<"target_r: "<<target_r<<endl;
        
        int l_r=0;
        int u_r=c-1;
        while(l_r<=u_r)
        {
            // cout<<"+++++++++++++++"<<endl;
            int m_r = l_r+(u_r-l_r)/2;
            // cout<<l_r<<" "<<m_r<<" "<<u_r<<endl;
            if(matrix[target_r][m_r] == target) return true;
            else if(matrix[target_r][m_r] > target) u_r = m_r-1;
            else l_r = m_r+1;
        }
        
        return false;
    }
};
