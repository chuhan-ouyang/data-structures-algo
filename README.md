# :pencil: Data Structure and Algorithms, C++ Fundamentals

### :notebook: 1. Data Structure 
  #### &emsp; 1.1 Linked List 
  #### &emsp; 1.2 Trees     
  #### &emsp; 1.3 Stack
  #### &emsp; 1.4 Queues
  #### &emsp; 1.5 Hashset
  #### &emsp; 1.6 Hashmaps

### :notebook: 2. Algorithms
  #### &emsp; 2.1 Backtracking(:star::star::star:)
  #### &emsp; 2.2 Dynamic Programming(:star::star::star::star::star:)
  #### &emsp; 2.3 Greedy(:star::star::star:)
  #### &emsp; 2.4 Graph (Traversal, Min, Cycles)(:star::star:)
  #### &emsp; 2.5 Linked List(:star:)
  #### &emsp; 2.6 Tree(:star:)  
  #### &emsp; 2.7 Sorting(:star:)
  #### &emsp; 2.8 Searching(:star:)
  #### &emsp; 2.9 Prefix Sum(:star:)
  #### &emsp; 2.10 Sliding Window(:star::star:)
  #### &emsp; 2.11 Two Pointers (Same Direction, Opposite Direction)(:star::star:)

### :notebook: 3. Patterns
  #### &emsp; 3.1 Trading Space/Time
  #### &emsp; 3.2 In-Place Operations
  #### &emsp; 3.3 Redundant Computation Elimination
  #### &emsp; 3.4 Early Exit
  #### &emsp; 3.5 Negative Indexing
  #### &emsp; 3.6 Intersection Detection

### :notebook: 4. Contorl Flow Management
  #### &emsp; 4.1 For/While Precise Control(:star::star::star:)

### :notebook: 5. C++ Familiarity
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

### :notebook: 6. Style
  #### &emsp; 6.1 Elegance
  #### &emsp; 6.2 Clarity

### :notebook: 7. Approach/Mindset

&nbsp;
> ## :notebook: Section 1: Data Structures
### :star: Linked List

### :star: Trees

### :star: Stacks

### :star: Queues

### :star: Hashset

### :star: Hashmap


&nbsp;
> ## :notebook: Section 2: Algorithms

### :star: Backtracking  
> Hint
* d 
> Key
* d 
> Problem
* d

### :star: Dynamic Programming
> Hint
* d 
> Key
* d 
> Problem
* d  

### :star: Greedy
> Hint
* d 
> Key
* d 
> Problem
* d  

### :star: Linked List: Dummy Node
> Hint
* need to return a new head node
* sometimes the new head node is the original head, but othertimes modifiied
  * eg. head pointer used for traversal (lost head)
  * eg. head node deleted
> Key
```cpp
ListNode* dummy = new ListNode(0);
dummy->next = head;
// computations
ListNode* res = dummy->next;
delete dummy;
return res;
```
> Problem
* Most linked list questions

### :star: Linked List: Two Pointers
> Hint
* One constant traversal (slow)
* Another with a constant speed or gap away
> Key
* Fast usually update with fast->next->next
* Or fast can skip ahead by n
> Problem
* [Remove Nth form End](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
* [Intersection](https://leetcode.com/problems/intersection-of-two-linked-lists/)

### :star: Linked List: Saving Next Pointer
> Hint
* manipulate the next pointer
> Key
```cpp
ListNode* next = head->next;
head->next = whatever;
```
> Problem
* Most linked list problems

### :star: Linked List: Cycle Detection
> Hint
* Is there a cycle
> Key
* slow and fast pointer
* if there is cycle, then they will intersect when fast has gone a full cycle ahead
* think: chasing problem
```cpp
bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast)
            {
                return true;
            }
        }

        return false;
    }
```
> Problem
* Cycle questions

### :star: Linked List: Cycle Start
> Hint
* Find the start
> Key
* 2 (x + y) = x + y + y + z, so x = z
* after intersecting once (which definitely will happen if there is a cycle), then end and start can traverse in sync (the same distance x, z) and will meet at the start again
```cpp
 ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                break;
            }
        }
        if (!(fast && fast->next))
        {
            return NULL;
        }
        while (head != slow)
        {
            head = head->next;
            slow = slow->next;
        }
        return head;
    }
```
> Problem
* [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)
 
### :star: Tree  
> Hint
* d 
> Key
* d 
> Problem
* d  

### :star: Graph 
> Hint
* d 
> Key
* d 
> Problem
* d  

### :star: Sorting
> Hint
* d 
> Key
* d 
> Problem
* d  

### :star: Searching  
> Hint
* d 
> Key
* d 
> Problem
* d  


### :star: Prefix Sum 
> Hint
* d 
> Key
* d 
> Problem
* d  

### :star: Sliding Window  
> Hint
* Find min/max length of some window
* Reduce from O(n<sup>2) to O(n) time complexity
> Key
* For loop iterate through all possible **end** of the window in sequence
  * Update the running state when appending a new **end** element
* While loop to dynamically adjust the pointer of the **front** of the window 
  * Keep looping uner some condition
* When a valid window is found, update best counter
```cpp
int res = 0; // best tracker
int start = 0;
for (int end = 0; end < A.size(); end++){ // move end ptr in seq
  // update running state based on end
  // update best if applicable
  while (c) { // condition for the interval to be valid
    ++start;
  }
}
return res;
```
> Problem
* [Fruits Into Baskets](https://leetcode.com/problems/fruit-into-baskets/)

### :star: Two Pointers: Same Direction
> Hint
* Constant traversal, and some information (position-relevant) need to be saved
* Remove in-place
> Key
* Fast pointer iterate through each element
* Slow pointer keep track of some "valid" condition, more selective in moving
```cpp
int slow = 0;
for (int fast = 0; fast < v.size(); fast++){
  if (c){ // if keeping this index
    v[slow++] = v[fast];
  }
}
// at the end, slow track how many elements are in the final res
```
> Problem
* [Remove Element] https://leetcode.com/problems/remove-element/

### :star: Two Pointers: Opposite Direction
> Hint
* Sorted at the two ends, and then meet in the middle
* Outside in
> Key
* One pointer start at left, another start at right
* Keep comparing until two pointers meet
  * Left pointer goes to the right
  * Right pointer goes to the left
```cpp
int left = 0, right = v.size() - 1;
while (left <= right){
  if (c) ++left;
  else --right;
}
```
> Problem


&nbsp;
> ## :notebook: Section 3: Patterns

### :star: Trading Space/Time
> Hint
* d
> Key
* d
> Problem
* d

### :star: In-Place Operations
> Hint
* Modify container structures/string, need to return modified structure
* Avoid creating a new string, reduce to O(1) space complexity
> Key
* Strings: use reverse(), resize();
> Problem
* [Reverse String 2](https://leetcode.com/problems/reverse-string-ii/)
* [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)

### :star: Redundant Computation Elimination
> Hint
* d
> Key
* d
> Problem
* d

### :star: Early Exit
> Hint
* Original structure has (partial) sorted properties
* Reduce time complexity from O(n<sup>2) to O(n)
* Find all elements within a structure that satisfy some condition
> Key
* think: if position [x][y] meets a condition, can you infer about whether the surrounding directions (same row, same col, to the left/right/up/down) meet/does not meet this condition?
> Problem
* [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/)

### :star: Negative Indexing
> Hint
* Could achieve O(n) space complexity with hashset, but we want O(1) space complexity
* Range of possible eliminates nicely fit within the size of the container
> Key
* When visiting an element, make the element with the corresponding index negative
* In the original array, all elements must be converted to strictly positive values
* Turn the array you are hashing into its own hashset
```cpp
for (int i = 0; i < v.size(); i++){
  int index = abs(v[i]); // adjust index to be in range (0 -> size - 1) if needed
  if (v[index] < 0){
    // this element has appeared before!
  } else{
    v[index] *= -1; // mark as visited
  }
}
```
> Problem
* [Can Make Arithmetic Progression From Sequence](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/)
* [Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/)

### :star: Intersection
> Hint
* Find intersection of two arrays and satisfy some condition
> Key
* Turn the first into a hashset (either directly or do it while iterating)
* For loop to iterate through the second structure, check if the element in need is in the first hashset
```cpp
for (int i = 0; i < v.size(); i++){
  int index = abs(v[i]); // adjust index to be in range (0 -> size - 1) if needed
  if (v[index] < 0){
    // this element has appeared before!
  } else{
    v[index] *= -1; // mark as visited
  }
}
```
> Problem
* [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)
 
&nbsp;
> ## :notebook: Section 4: Contorl Flow Management

### :star: For/While Precise Control
* replace for loop


&nbsp;
> ## :notebook: Section 5: C++ Fundamentals

### :star: String Library
* reverse: done in place, O(n)
  * range: [)
```cpp
reverse(v.begin() + i, v.begin() + k + 1); // reverse ith to kth
reverse(v.begin() + i, v.begin() + i + k);  // reverse ith for a length of k
```

### :star: Vector Library
* find max/min
```cpp
int maxVal = *max_element(v.begin(), v.end()), minVal = *min_element(v.begin(), v.end());
reverse(v.begin() + i, v.begin() + i + k);  // reverse ith for a length of k
```

### :star: Hashset Library
* iterate through hashset
```cpp
unordered_set<int> m;
for (const auto& num: m){
  cout << num << endl;
}
string s = "abcde";
```

### :star: Hashmap Library
* iterate through hashmap
```cpp
unordered_map<int, int> m;
for (const auto& pair: m){
  cout << pair.first << ": " << pair.second << endl;
}
string s = "abcde";
```

### :star: Stack Library

### :star: Queue Library

### :star: Priority Queue Library

### :star: Raw Arrays
* be careful of initializing int raw arrays: can use 0
```cpp
int record[26] = {0}; // ok
int record1[26] = {1}; // not ok!
```

### :star: Iterators
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

### :star: Arithmetic
* m<sup>n
```cpp
int res = pow(m, n); // m ^ n is bitwise XOR
```
* num * var
```cpp
int res = 2 * k; // res = 2k is illegal
```

### :star: Bit Manipulations
* & = bitwise and
* | = bitwise or 
* ^ = bitwise XOR
* << (digits to left shift) 
* \>\> (digits to shift)  
* ~ = bitwise not

### :star: Conversions
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

### :star: Other
* always want var a to be larger than b
```cpp
if (b > a) swap(a, b);
```
* covering range [-n, n] need (2n + 1) elements
* array index misalignment
  * eg. if use index i to represent to represent sequence (ith + 1), must access arr using A[seq - 1]


&nbsp;
> ## :notebook: Section 6: Style
### :star: Op Tips
* raw array faster
```cpp
int record[26] = {0};  // instead of vector<int> record(26, 0)
```

### :star: Elegance Tips
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

### :star: Clarity Tips
* class private fields: _fieldNames
* add temp variable to store expressions if used multiple time/obscure

> ## :notebook: Section 7: Approach/Mindset
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
  

# :pencil: Daily Log
* 6/5: swap, reverse, remove_node, intersection, design, delete n, cycle 2, straight line (8)
* 6/6: can_make_arith, find_dup, flip_bits (3)
* 6/7: common, intersection, happy num, two sum, four sum, ransom, count neg (7)
* 6/8: longest arith seq, three sum, bsearch, reverse string 1, reverse string 2 (5)
* 6/9: reverse words