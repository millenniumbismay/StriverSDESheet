class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int firstCol = -1; //used to store if the first col becomes 0, matrix[0][0] will store if first row becomes 0
        
        //print the normal matrix
        for(int i=0; i<rows;i++)
        {
            for(int j=0; j<columns; j++)
            {
                cout<< matrix[i][j]<< " ";
            }
            cout<<endl;
        }
        cout<<"_______________________________"<<endl;
        
        if(matrix[0][0] == 0)
        {
            firstCol = 0;
        }
        
        for(int j = 1; j<columns; j++)
        {
            if(matrix[0][j] == 0)
                matrix[0][0] = 0;
        }
        
        for(int i=1; i<rows; i++)
        {
            if(matrix[i][0] == 0)
                firstCol = 0;
        }

        for(int i=1; i<rows; i++)
        {
            for(int j=1; j<columns; j++)
            {   
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
                
        //print the flagged matrix
        for(int i=0; i<rows;i++)
        {
            for(int j=0; j<columns; j++)
            {
                cout<< matrix[i][j]<< " ";
            }
            cout<<endl;
        }
        cout<<"firstCol"<<firstCol<<endl;
        
        //setting the values to zero except the first row
        for(int i = 1; i<rows; i++)
        {
            for(int j = 1; j<columns; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        if(matrix[0][0] == 0)
            for(int j = 0; j<columns; j++)
                matrix[0][j] = 0;
        
        if(firstCol == 0)
            for(int i = 0; i<rows; i++)
                matrix[i][0] = 0;
        
    }
};