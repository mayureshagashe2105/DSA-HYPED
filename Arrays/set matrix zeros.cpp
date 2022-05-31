class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows;
        set<int> cols;

        
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
        for (set<int>::iterator itr = rows.begin(); itr != rows.end(); ++itr)
        {
            for (int i = 0; i < matrix[0].size(); ++i)
                matrix[*itr][i] = 0;
        }
        
        for (set<int>::iterator itr = cols.begin(); itr != cols.end(); ++itr)
        {
            for (int i = 0; i < matrix.size(); ++i)
                matrix[i][*itr] = 0;
        }
        
        
    }
};
