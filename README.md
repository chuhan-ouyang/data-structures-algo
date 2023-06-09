# Data Structure and Algorithms, C++ Fundamentals

### 1. Data Structure 
  #### &emsp; 1.1 Linked List 
  #### &emsp; 1.2 Trees     
  #### &emsp; 1.3 Stack
  #### &emsp; 1.4 Queues
  #### &emsp; 1.5 Hashset
  #### &emsp; 1.6 Hashmaps

### 2. Algorithms
  #### &emsp; 2.1 Backtracking(:star::star::star:)
  #### &emsp; 2.2 Dynamic programming(:star::star::star::star::star:)
  #### &emsp; 2.3 Greedy(:star::star::star:)
  #### &emsp; 2.4 Graph (Traversal, Min, Cycles)
  #### &emsp; 2.5 Linked List
  #### &emsp; 2.6 Tree  
  #### &emsp; 2.7 Sorting
  #### &emsp; 2.8 Searching
  #### &emsp; 2.9 Prefix Sum
  #### &emsp; 2.10 Sliding Window
  #### &emsp; 2.11 Two Pointers (Same Direction, Opposite Direction)

### 3. Logic/Patterns
  #### &emsp; 3.1 Trading Space/Time
  #### &emsp; 3.2 Redundant Computation Elimination
  #### &emsp; 3.3 Early Exit
  #### &emsp; 3.4 Negative Indexing
  #### &emsp; 3.5 Intersection Detection

### 4. Contorl Flow Management
  #### &emsp; 4.1 For/While Precise Control

### 5. C++ Familiarity
  #### &emsp; 5.1 String
  #### &emsp; 5.2 Vector
  #### &emsp; 5.3 Hashset
  #### &emsp; 5.4 Hashmap
  #### &emsp; 5.5 Stack
  #### &emsp; 5.6 Queue
  #### &emsp; 5.7 Priority Queue
  #### &emsp; 5.8 Arithmetic
  #### &emsp; 5.9 Bit
  #### &emsp; 5.10 Conversions
  #### &emsp; 5.11 Others

### 6. Style
  #### &emsp; 6.1 Elegance
  #### &emsp; 6.2 Clarity

### 7. Approach/Mindset

&nbsp;
> ## Section 1: Data Structures
### Linked List

### Trees

### Stacks

### Queues

### Hashset

### Hashmap


&nbsp;
> ## Section 2: Algorithms

### Backtracking  
> Hint
* d 
> Key
* d 
> Problem
* d

### DP
> Hint
* d 
> Key
* d 
> Problem
* d  

### Greedy
> Hint
* d 
> Key
* d 
> Problem
* d  

### Linked List: Dummy Node
> Hint
* d 
> Key
* d 
> Problem
* d  

### Linked List: Two Pointers
> Hint
* d 
> Key
* d 
> Problem
* d  

### Linked List: Saving Next Pointer
> Hint
* d 
> Key
* d 
> Problem
* d  

### Linked List: Cycle Detection
> Hint
* d 
> Key
* d 
> Problem
* d  

### Linked List: Cycle Start
> Hint
* d 
> Key
* d 
> Problem
* d  
 
### Tree  
> Hint
* d 
> Key
* d 
> Problem
* d  

### Graph 
> Hint
* d 
> Key
* d 
> Problem
* d  

### Sorting
> Hint
* d 
> Key
* d 
> Problem
* d  

### Searching  
> Hint
* d 
> Key
* d 
> Problem
* d  

### Hashset: Intersection of Two Sets
> Hint
* d 
> Key
* d 
> Problem
* d  

### Prefix Sum 
> Hint
* d 
> Key
* d 
> Problem
* d  

### Sliding Window  
> Hint
* d 
> Key
* d 
> Problem
* d

### Two Pointers: Same Direction
> Hint
* d 
> Key
* d 
> Problem
* d  

### Two Pointers: Opposite Direction
> Hint
* d 
> Key
* d 
> Problem
* d  


&nbsp;
> ## Section 3: Logic/Patterns

### Trading Space/Time

### Redundant Computation Elimination

### Early Exit

### Negative Indexing

### Intersection
* One structure as hashset, another as traversal
 

&nbsp;
> ## Section 4: Contorl Flow Management

### For/While Precise Control
* replace for loop


&nbsp;
> ## Section 5: C++ Fundamentals

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

### Priority Queue Library

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


&nbsp;
> ## Section 6: Style
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

> ## Section 7: Approach/Mindset
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