class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
           int x = matrix[0].size(), c = matrix.size();
        vector<vector<int>> ans(x, vector<int> (c,0));
        
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < c; j++)
            {
                ans[j][c-i-1] = matrix[i][j];
            }
        }
        matrix = ans;
    }
};