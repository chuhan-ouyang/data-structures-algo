class Solution{
    public:
        string reverseStr(string s, int k){
            for (int i = 0; i < s.size(); i += (2 * k)){
                if (i + k <= s.size()){
                    reverse(s.begin() + i, s.begin() + i + k);
                } else{
                    reverse(s.begin() + i, s.end());
                }
            }
            return s;
        }
}

/*
Improvements for Correctness/Ops
1. Mistake: I wrote a function, but when calling it, forgot to include all the necessary params
2. Op: faster to do string(v.begin(), v.end()) and v(s.begin(), s.end()) when necessary
3. if reversing, instead of using handwrite funciton to manipulate char array, use the reverse function
4. when branching, congregate branches that do same actions
    eg. in here, both when more than 2k and at least k left you always reverse first k
*/