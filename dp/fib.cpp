class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        vector<int> dp(n + 1, 0);
        dp[0] = 0, dp[1] = 1;
        for (int i = 2; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

/*
Mistakes/Ops:
1) If there are obvious edge cases, just directly return
2) Every time you do a vector access, no matter in a loop or outside, please think about out of bounds issues
*/