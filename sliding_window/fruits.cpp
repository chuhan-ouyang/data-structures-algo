class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // move to right, add to new hashset
        // if more than two elements
        // keep adjusting front until one element disappear
        int maxFruits = INT_MIN;
        unordered_map<int, int> map;
        int start = 0;
        for (int end = 0; end < fruits.size(); ++end){
            map[fruits[end]]++;
            if (map.size() <= 2){
                int fruits = end - start + 1;
                maxFruits = fruits > maxFruits ? fruits : maxFruits;
            }
            while (map.size() > 2){
                map[fruits[start]]--;
                if (map[fruits[start]] == 0){
                    map.erase(fruits[start]);
                }
                ++start;
            }
        }
        return maxFruits;
    }
};