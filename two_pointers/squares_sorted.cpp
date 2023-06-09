#include <vector>

class Solution{
    public:
        vector<int> sortedSquares(vector<int>& A){
            int k = A.size() - 1;
            vector<int> result(A.size(), 0);
            for (int i = 0, j = A.size() - 1; i <= j;){
                if (A[i] < A[j]){
                    result[k--] = A[j] * A[j];
                }
                else{
                    result[k--] = A[i] * A[i];
                }
            }
            return result;
        }
}

/*
two pointers; opposite ens
fancy syntax: two loop init varibles, no third loop increment conition (increment inside loop)
post increment using x++/x--
avoid reversal by filling in in the end and tthen go tto tthe beginning by decrementing witth each iteration
*/