class Solution{
    public:
        int longestArithSeqLength(vector<int>& nums){
            int n = nums.size();
            vector<vector<int>> dp(n, vector<int>(1001, 1));
            int res = 2;

            for (int i = 0; i < n; ++i){
                for (int j = 0; j < i; ++j){
                    int diff = nums[prev] - nums[diff];
                    dp[r][diff + 500] = dp[prev][diff + 500] + 1;
                    res = max(res, dp[r][diff 500]);
                }
            }

            return res;
        }
}

/*
Key Lesson Learned?
1. carefully think of what each dimension of the dp array mean, and what does dp[r][c] mean
2. be careful when there is a misalignment between the postive 0-index of the array 0 -> 1000 and the actual value they represent
 for example, I want to use the array of size 1000 to represent all possible diff -500 -> 500, must be careful to use diff + 500 as the actual index
3. use vairables to simplify logic and help develop code, don't just throw expressions all together


Why Couldn't Solve/Improvements?
1. original idea is to use 2d array represnting all possible start and endpoints; not optimal because 15 -> 19 can have seq 
15, 16, 17, 18, 19 (local optimal) but eventually doing 15 -> 17 -> 19 is better because later numbers conform more with the "diff 2" seq
2. when doing dp, essentially it is an enumeration of all previous possibilities -> inferring future best, so it is important that the
dp structure completely encpasualte all the possibilities, and some non-local optimals may turn out to be optimal globally
3. -n -> n needs 2n + 1 slots (because we also need to include 0)
*/