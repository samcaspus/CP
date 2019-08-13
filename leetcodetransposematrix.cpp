class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
     vector<vector<int>> res; 
        int rowSize = A.size();
        int colSize = A[0].size();
        
        vector<int> aRow(rowSize);
        for(int i = 0; i < colSize; i++)
            res.push_back(aRow);
        
        for(int i = 0; i < colSize; i++)
        {
            for(int j = 0; j < rowSize; j++)
                res[i][j] = A[j][i];
        }
        
        return res;
    }
};
