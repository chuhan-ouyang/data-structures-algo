class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int count = 1;
        int start = 0;
        int end = n - 1;
        while (start <= end){
            for (int col = start; col <= end; col++){
                res[start][col] = count++;
            }
            // up to down
            for (int row = start + 1; row <= end; row++){
                res[row][end] = count++;
            }
            // right to left
            for (int col = end - 1; col >= start; col--){
                res[end][col] = count++;
            }
            // down to up
            for (int row = end - 1; row >= start + 1; row--){
                res[row][start] = count++;
            }
            start++;
            end--;
        }
        return res;
    }
};

/*
Note
vector<vector<int>> res(n, vector<int>(n, 0));
*/