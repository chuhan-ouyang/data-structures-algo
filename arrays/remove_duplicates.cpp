#include <vector>

class Solution{
    public:
        int removeElement(std::vector<int>& nums, int val){
            int slowIndex = 0;
            for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++){
                if (val != nums[fastIndex]){
                    nums[slowIndex++] = nums[fastIndex];
                }
            }
            return slowIndex;
        }
};

/*
Notes:
two pointers:
fast pointer always iterate through each element
slow pointer is more detailed check and only increment when condition is met
fancy syntax: x++, first read x value as it is, and then increment it after being read
whereas ++x means fist increment then read x
replace read x and then increments (post)
*/