class Solution{
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
            unordered_set<int> res;
            unordered_set<int> nums1Set(nums1.begin(), nums1.end());
            for (int elem: nums2){
                if (nums1end.find(elem) != nums1Set.end()) res.insert(elem);
            }
            return vector<int>(nums1Set.begin(), nums1Set.end());
        }
}