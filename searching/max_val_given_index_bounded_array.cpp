class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int left = 1, right = maxSum - (n - 1);
        while (left <= right){
            int mid = left + (right - left) / 2;
            long long int minSum = minMaxSum(mid, n, index);
            if (minSum == maxSum) return mid;
            else if (minSum < maxSum) left = mid + 1;
            else right = mid - 1;
        }
        return right;
    }
private:
    // put val at index, what is the minimum sum necessary to fill the entire array
    long long int minMaxSum(int val, int n, int index){
        long long int res = val;
         // left
        int length = index;
        res += arithSum(length, val);
         // right
        length = n - 1 - index;
        res += arithSum(length, val);
        return res;
    }

    long long int arithSum(int length, int val){
        long long int res = 0;
        int start = max(val - length, 1), end = val - 1;
        long long int sum = start + end;
        long long int numElem = end - start + 1;
        res += sum * numElem / 2;
        if (val - length < 1) res += (length - val + 1);
        return res;
    }
};

/*
Mistakes/Op:
When you declare an int variable, you must initialized it!
When using min/max for cap, be careful about using min/max
Arithmetic sequence's time complexity can be greatly reduced by using the algebraic formula then using a for loop to sum individual elements up
If overflow, use long long int, and make sure that when you are doing operations
on really large number, like a * (b - c), all operands of the operator are decl as long long int
*/