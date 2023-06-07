# Data Structures and Algorithms
Summarization of key problems in data structures and algorithms

## Arrays Summary
* sliding windows
* two pointers same direction
* two pointers opposite directoins (left & right directions)
* prefix sums 
* space op: neg index

## Linked List Summary
* dummy node
* slow/fast & skip-ahead pointer
* saving next pointer
* cycle detection
* floyd's algorithm for cycle start

## HashSet Summary
* intersection op space

## Data Types
* to convert a char to string, you must not use to_string! that will give you the ascii number
* instead, use string(n, char), where n is the rep count

## Containers: Vectors
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

## One Liner Coding Styles
* basic data types: type a = 1, b = 2, c = 3, d = 4
* can group same logic lines of code into one line, separated using ","
* always use +=, -=, *=, /= whenever possible

## Other Ops
* two comparisons: forcing one of the two to be the longer one
  * if want A to be larger
  * if (b > a) swap(a, b)
* find max elemnt in array: int maxVal = *max_element(v.begin(), v.end()), minVal = *min_element(v.begin(), v.end())
* if expr used >= 3 diff craete a temp variable, if used 2 times, create temp if the expression is ugly


# Daily Log
* 6/5: swap, reverse, remove_node, intersection, design, delete n, cycle 2, straight line (8)
* 6/6: can_make_arith, find_dup, flip_bits (3)