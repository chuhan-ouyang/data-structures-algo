class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        int r = rows - 1, c = 0;
        int pos = 0;
        while (c < cols){
            // all above a positive are also positive
            if (grid[r][c] >= 0){
                pos += (r + 1);
                ++c; // examine next column
            }
            else{
                // all at or below this column to the right are neg
                if (--r < 0){
                    break;
                }
            }
        }
        return rows * cols - pos;
    }
};