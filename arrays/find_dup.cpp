class Solution{
    public:
        vector<int> findDuplicates(vector<int>& v){
            vector<int> res;
            for (int i = 0; i < nums.size(); ++i){
                int index = abs(nums[i] - 1);
                if (nums[index] > 0) nums[index] *= -1;
                else res.push_back(abs(nums[i]));
            }
            return res;
        }
}