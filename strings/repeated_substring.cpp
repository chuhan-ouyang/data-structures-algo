class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if (s.size() == 0) return false;
        int next[s.size()];
        getNext(next, s);
        int len = s.size();
        if (next[len - 1] != -1 && len % (len - next[len - 1] + 1 == 0){
            return true;
        }
        return false;
    }
private:
    void getNext(int* next, const string& s){
        next[0] = -1;
        int j = -1;
        for (int i = 1; i < s.size(); i++){
            while (j >= 0 && s[i] != s[j + 1]){
                j = next[j];
            }
            if (s[i] == s[j + 1]){
                j++;
            }
            next[i] = j;
        }
    }

};

/*
Mistakes/Ops
1) Forgot KMP prefix computed this way need a +1, and read from the previous [i - 1] cell if fails at ith
2) Forgot edge case empty string
3) Forgot edge case of len == 0
4) Misunderstanding of the prefix/postfix definition, invalid attempt at the formula
*/ 