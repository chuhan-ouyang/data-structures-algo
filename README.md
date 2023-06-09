# Data Structure and Algorithms, C++ Fundamentals

### 1. Data Structure 
  1.1 Linked List \
  1.2 Trees      \
  1.3 Stack\
  1.4 Queues\
  1.5 Hashset\
  1.6 Hashmaps\
2. Algorithms\
  2.1 Backtracking(:star::star::star:)\
  2.1 Dynamic programming(:star::star:\:star::star::star:)
  2.1 Greedy(:star::star::star:)\
  2.1 Graph (Traversal, Min, Cycles)\
  2.1 Linked List\
  2.1 Tree  \
  2.1 Sorting\
  2.1 Searching\
  2.1 Prefix Sum\
  2.1 Sliding Window\
  2.1 Two Pointers (Same Direction, Op\posite Direction)
3. Logic/Patterns\
  3.1 Trading Space/Time\
  3.1 Redundant Computation Eliminatio\n
  3.1 Early Exit\
  3.1 Negative Indexing\
  3.1 Intersection Detection\
4. Contorl Flow Management\
  4.1 For/While Precise Control\
5. C++ Familiarity\
  5.1 String\
  5.1 Vector\
  5.1 Hashset\
  5.1 Hashmap\
  5.1 Stack\
  5.1 Queue\
  5.1 Arithmetic\
  5.1 Bit\
  5.1 Others\
6. Style\
  6.1 Elegance\
  6.1 Clarity\
7. Approach/Mindset\

> Section 1: Data Structures
### Linked List
### Trees
### Stacks
### Queues
### Hashset
### Hashmap

## > Section 2: Algorithms
### Backtracking Overwiew
### DP Overview
### Greedy Overwiew
### Linked List Overwiew
* Dummy node
* Slow/fast/skip-ahead pointer
* Saving next pointer
* Cycle detection
  * Cycle start detection
### Tree Overwiew
### Graph Overwiew
### Sorting Overwiew
### Searching Overwiew
### Hashset Overview
* Intersection of two sets
### Prefix Sum Overview
### Sliding Window Overwiew
### Two Pointers Overwiew
* Same direction
* Opposite direction

## > Section 3: Logic/Patterns
### Trading Space/Time
### Redundant Computation Elimination
### Early Exit
### Negative Indexing
### Intersection
* One structure as hashset, another as traversal
 
## > Section 4: Contorl Flow Management
### For/While Precise Control
* replace for loop

## > Section 5: C++ Fundamentals
### String Library
* reverse: done in place, O(n)
  * range: [)
```cpp
reverse(v.begin() + i, v.begin() + k + 1); // reverse ith to kth
reverse(v.begin() + i, v.begin() + i + k);  // reverse ith for a length of k
```
### Vector Library
* find max/min
```cpp
int maxVal = *max_element(v.begin(), v.end()), minVal = *min_element(v.begin(), v.end());
reverse(v.begin() + i, v.begin() + i + k);  // reverse ith for a length of k
```
### Hashset Library
* iterate through hashset
```cpp
unordered_set<int> m;
for (const auto& num: m){
  cout << num << endl;
}
string s = "abcde";
```
### Hashmap Library
* iterate through hashmap
```cpp
unordered_map<int, int> m;
for (const auto& pair: m){
  cout << pair.first << ": " << pair.second << endl;
}
string s = "abcde";
```
### Stack Library
### Queue Library
### Iterators
* useful for strings/containers
* dereference an iterator to see the contents
```cpp
string s = "abcde";
std::cout << *s.begin() << std::endl;
```
* dereferencing the begin() iterator refers to the first element
  * the nth element (0-index) can be accessed by begin() + n
```cpp
string s = "abcde";
for (int i = 0; i < s.size(); i++){
  std::cout << *(s.begin() + i) << std::endl; // print the ith element
}
``` 
* the end() iterator points **after** the last element
  * to access the nth element (0-index) from the end: end() - (n + 1)
```cpp
string s = "abcde";
for (int i = 0; i < s.size(); i++){
  std::cout << *(s.end() - i - 1) << std::endl; // print the ith element from the end
}
``` 
### Arithmetic
* m^n
```cpp
int res = pow(m, n); // m ^ n is bitwise XOR
```
* num * var
```cpp
int res = 2 * k; // res = 2k is illegal
```
### Bit Manipulations
### Converstions
* convert a char to a string
```cpp
char c = 'a';
string s = string(1, c); // don't use to_string
```
* convert a number to string
```cpp
string res = "hello";
res += to_string(3); // must use to_string 
```
* convert a string into a vector of chars
```cpp
vector<char> v(s.begin(), s.end())
```
* to convert a vector of chars back to a string
```cpp
string str(v.begin(), v.end());
```
* convert an unordered_set into vector
```cpp
vector<int>(s.begin(), s.end());
```
### Other
* always want var a to be larger than b
```cpp
if (b > a) swap(a, b);
```
* covering range [-n, n] need (2n + 1) elements
* array index misalignment
  * eg. if use index i to represent to represent sequence (ith + 1), must access arr using A[seq - 1]

## > Section 6: Style
### Op Tips
* raw array faster
```cpp
int record[26] = {0};  // instead of vector<int> record(26, 0)
```
### Elegance Tips
* return newly constructed value in the return statement
  * avoid creating a temp variable, then returning the temp variable
```cpp
return vector<int>(s.begin(), s.end());
return vector<int>(10, 0);
return {1,2,3,4};
```
* one liner if: don't need brackets
* while(1) instead of while(true)
* ++i is faster
* when accessing an element and immediately bumping the iter after access
```cpp
int num = A[i++]; // equivalent to: int num = A[i], ++i;
```
* multi-declare/init
```cpp
int a = 1, b = 2, c = 3, d;
```
* use +=, -=, *=, /= whenever possible
### Clarity Tips
* class private fields: _fieldNames
* add temp variable to store expressions if used multiple time/obscure

## > Section 7: Approach/Mindset
1. Time, carefully read question, carefully read test case
  - how does the cases differ?
  - what are the different scenario to consider
2. Sketch solution on paper, run through solution on all test cases
3. Pseudocode and code
  - while coding, beaware of data structures, specs, precisely type
4. Examine code, work through difficult logic "hotspots"
5. Debug with example test case
6. Identify edge cases
7. Debug with the full test suite
8. Document mistakes/ops
9. Update notes 
  

# Daily Log
* 6/5: swap, reverse, remove_node, intersection, design, delete n, cycle 2, straight line (8)
* 6/6: can_make_arith, find_dup, flip_bits (3)
* 6/7: common, intersection, happy num, two sum, four sum, ransom, count neg (7)
* 6/8: longest arith seq, three sum, bsearch, reverse string 1, reverse string 2 (5)
* 6/9: reverse words