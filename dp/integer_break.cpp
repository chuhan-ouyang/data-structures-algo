class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n + 1);
        dp[2] = 1;
        for (int i = 3; i <= n; i++){
            for (int j = 1; j <= i / 2; j++){
                dp[i] = max(dp[i], max((i - j) * j, dp[i - j] * j));
            }
        }
        return dp[n];
    }
};

/*
Mistakes/Ops:
1) didn't fully consider the edge cases and why we need them
2) didn't run through the example clear enough to realize that a different recurrence rule yield more op solution
3) got confused in the two loop variables (inner vs. outer vs. external)
4) better logic for better def of the array
*/