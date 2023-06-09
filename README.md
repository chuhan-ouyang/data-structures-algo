# Data Structures and Algorithms
Summarization of key problems in data structures and algorithms

# Tips
For important questions
1. time & carefully read the questions
2. sketch sol on paper, run through test cases
3. espeically work through news/diff logic
4. pseudo
5. code
6. run
7. think about edge, then submit
8. doc what went wrong, key ideas, op
9. update summary and readme

## Arrays Summary
* sliding windows
* two pointers same direction
* two pointers opposite directoins (left & right directions)
* prefix sums 
* space op: neg index
* sorted matrix
* n^2 to n time op

## Linked List Summary
* dummy node
* slow/fast & skip-ahead pointer
* saving next pointer
* cycle detection
* floyd's algorithm for cycle start

## HashSet Summary
* intersection op space


## String Summary
* use lib func

## HashMap/Set Tips
* to iterate through hashmap
  * for (const auto& pair: map) {pair.first (key), pair.second (value)}
* to iterate through ahshset
  * to interate through unordered_set/set:
  * for (const auto& elem: s){elem...}

## Data Types Tips
* to convert a char to string, you must not use to_string! that will give you the ascii number
* instead, use string(n, char), where n is the rep count

## Iterators Tips
* useful for strings, containers
* dereference an iterator to see the content
```cpp
string s = "abcde";
std::cout << *s.begin() << std::endl;
```
* the begin() iterator refers to the very first element
  * the nth elem is begin() + n (0-index)
```cpp
string s = "abcde";
for (int i = 0; i < s.size(); i++){
  std::cout << *(s.begin() + i) << std::endl; // print ith elem
}
``` 
* on the other hand, end operator is the one after the last elem
  * acess nth from end = end() - (n + 1)
  * where n is the index counting from the end
  * 0-index
```cpp
string s = "abcde";
for (int i = 0; i < s.size(); i++){
  std::cout << *(s.end() - i - 1) << std::endl; // print ith elem
}
``` 

## Strings Tips
* to convert a string into a vector of chars
```cpp
// using special constructor 
// string's iterators
vector<char> v(s.begin(), s.end())
```
* to convert a vector of chars back to a string
```cpp
// using special string constructor
// vector's iterators
string str(v.begin(), v.end());
```
* note that converting a tatatype into another often involves using a constructor and using the begin() and end() iter
* reverse done in place, built-in, efficient
```cpp
// reverse is [)
// to reverse the ith to kth elem 
reverse(v.begin() + i, v.begin() + k + 1);
// to reverse form ith till length k
reverse(v.begin() + i, v.begin() + i + k);
```

## Containers: Vectors Tips
* construct vector using other containers (eg. unordered_set) vector<int> v(s.begin(), s.end());
* in return statements, for simplicity, can just return ..vector<int> constructor without giving it a name
  * eg. return vector<int>(10, 0), return vector<int>(s.begin(), s.end()), return {1,2,3,4}
 
## Class Coding Styles
* class design:
  * private fields: _fieldNames

## Loop Coding Styles
* while(n--) {op} is an elegant way to perform op n times
  * same as for (int i = 0; i < n; ++i)
* if one line while/if, don't need brackets
* figuring out loops is about finding repetitive pattern, deciding bounds 
* using while(1) instead of while(true) is smart

## One Liner Coding Styles
* basic data types: type a = 1, b = 2, c = 3, d = 4
* can group same logic lines of code into one line, separated using ","
* always use +=, -=, *=, /= whenever possible


## Arithmetic
* to do m ^ n, don't do m ^ n (that is bitwise XOR), must to pow(m, n)
* to do number * variable, you may be tempted to do numbervariable, but you cannot forget the *
  * eg. 2k is not allowed, must write out 2 * k

## Ops/Knowledge
* Memory Usage: mostly measuring changable area
  * stack: methods params, local variables, return values, recursion call stack
  * heap: for "new" objects
* memory alignment
  * especially important for cross-platform languages 
  * useful becuase not all hardware platform can easily access all memory addresses
    * some hardare platforms can only access some memory address with some specific data types
    * must have mem alignment for a program to run on multiple platforms
  * memory alignment also significantly reduces the speed that CPU access the memory
* compiler will op for mem alignment

## Other  
* two comparisons: forcing one of the two to be the longer one
  * if want A to be larger
  * if (b > a) swap(a, b)
* find max elemnt in array: int maxVal = *max_element(v.begin(), v.end()), minVal = *min_element(v.begin(), v.end())
* if expr used >= 3 diff craete a temp variable, if used 2 times, create temp if the expression is ugly
* raw arrays must be initialized! if you just do int r[26]; there are going to be rando values in mem :(
* -n -> n needs (2n + 1) elements of storage
* whenever you create a new array, carefully think what does arr[i] mean
  * for example, does not represent the ith (0-index) elem's value
  * or, does it represent the (ith + 1)'s elem's value
    * in this case, you need to do index = realIndex - 1
  * be careful to align the meaning with the index and see if any conversion is possible


# Daily Log
* 6/5: swap, reverse, remove_node, intersection, design, delete n, cycle 2, straight line (8)
* 6/6: can_make_arith, find_dup, flip_bits (3)
* 6/7: common, intersection, happy num, two sum, four sum, ransom, count neg (7)
* 6/8: longest arith seq, three sum, bsearch, reverse string 1, reverse string 2 (5)
* 6/9: 
