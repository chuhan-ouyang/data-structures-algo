#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <iostream>

int main(){
    std::unordered_map<int, int> map;
    std::cout << map.size() << std::endl;
    map[0]++;
    std::cout << map.size() << std::endl;
}