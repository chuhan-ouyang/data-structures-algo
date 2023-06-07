class Solution{
    public:
        bool canMakeArithProress(vector<int>& arr){
            int maxVal = *max_element(arr.begin(), arr.end()), minVal = *min_element(arr.begin(), arr.end());
            int diff = (maxval - minVal) / (arr.size() - 1);
            if (maxVal != minVal + (arr.size() - 1) * diff) return false;
            if (diff == 0) return true;

            for (int i = 0; i < arr.size(); ++i){
                arr[i] -= minVal;
                ++arr[i];
            }

            for (int i = 0; i < arr.size(); ++i){
                int index = abs(arr[i]) - 1;
                if (index % diff == 0 || arr[index/diff] < 0) return false;
                arr[index / diff] *= =1;
            }
            return true;
        }
}