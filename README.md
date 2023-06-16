# :pencil: Data Structures and Algorithms, C++ Fundamentals

### :notebook: 1. Data Structures
  #### &emsp; 1.1 Linked List 
  #### &emsp; 1.2 Trees     
  #### &emsp; 1.3 Stack
  #### &emsp; 1.4 Queues
  #### &emsp; 1.5 Hashset
  #### &emsp; 1.6 Hashmaps
  #### &emsp; 1.7 Map (Red-Black Trees)

### :notebook: 2. Algorithms
  #### &emsp; 2.1 Backtracking(:star::star::star:)
  #### &emsp; 2.2 Dynamic Programming(:star::star::star::star::star:)
  #### &emsp; 2.3 Greedy(:star::star::star::star:)
  #### &emsp; 2.4 Graph (Traversal, Min, Cycles)(:star::star:)
  #### &emsp; 2.5 Linked List(:star:)
  #### &emsp; 2.6 Tree(:star:)  
  #### &emsp; 2.7 Sorting(:star:)
  #### &emsp; 2.8 Searching(:star:)
  #### &emsp; 2.9 Prefix Sum(:star:)
  #### &emsp; 2.10 Sliding Window(:star::star:)
  #### &emsp; 2.11 Two Pointers (Same Direction, Opposite Direction)(:star::star:)
  #### &emsp; 2.12 KMP


### :notebook: 3. Patterns
  #### &emsp; 3.1 Trading Space/Time
  #### &emsp; 3.2 In-Place Operations
  #### &emsp; 3.3 Redundant Computation Elimination
  #### &emsp; 3.4 Redundant Space Elimination
  #### &emsp; 3.5 Early Exit
  #### &emsp; 3.6 Negative Indexing
  #### &emsp; 3.7 Intersection Detection
  #### &emsp; 3.8 Avoid Repetition
  #### &emsp; 3.9 Other Intuitions

### :notebook: 4. Contorl Flow Management
  #### &emsp; 4.1 If Control (Bounds Checking)
  #### &emsp; 4.2 For/While Precise Control(:star::star::star:)

### :notebook: 5. C++ Fundamentals
  #### &emsp; 5.1 String
  #### &emsp; 5.2 Vector
  #### &emsp; 5.3 Hashset
  #### &emsp; 5.4 Set
  #### &emsp; 5.5 Hashmap
  #### &emsp; 5.6 Map
  #### &emsp; 5.7 Stack
  #### &emsp; 5.8 Queue
  #### &emsp; 5.9 Priority Queue
  #### &emsp; 5.10 Arithmetic
  #### &emsp; 5.11 Bit
  #### &emsp; 5.12 Conversions
  #### &emsp; 5.13 Struct
  #### &emsp; 5.14 Classes
  #### &emsp; 5.15 Correctness Issues
  #### &emsp; 5.16 Others
  #### &emsp; 5.17 Utils

### :notebook: 6. C++ Advanced Usages
  #### &emsp; 6.1 std::function

### :notebook: 7. Style
  #### &emsp; 7.1 Optimization
  #### &emsp; 7.2 Elegance
  #### &emsp; 7.3 Clarity

### :notebook: 8. Approach/Mindset

&nbsp;
> ## :notebook: Section 1: Data Structures
### :star: Linked List
> Usage
* d
> Key Ops 
* d
 

### :star: Trees
> Usage
* d
> Key Ops 
* d
 

### :star: Stacks
> Usage
* d
> Key Ops 
* d
 

### :star: Queues
> Usage
* d
> Key Ops 
* d
 

### :star: Hashset
> Usage
* d
> Key Ops 
* d
 

### :star: Hashmap
> Usage
* d
> Key Ops 
* d
 

### :star: Maps (Red-Black Trees)
> Usage
* Sorted order (eg. time sequence), and such order has a significant meaning
* Quickly support lower/upper bound usage (*not exact* usages)
  * Eg. Find the smallest element that is greater than target
  * If you are just trying to find an exact element, you can just use unordered_map
> Key Ops 
* Put O(logn)
* Get O(logn)
 

&nbsp;
> ## :notebook: Section 2: Algorithms

### :star: Backtracking  
> Hint
* d 
> Key
* d 
> Problems
* d

### :star: Dynamic Programming
Just Think: Do I need to rely on previous states?
> General Approach
1. Decide the dimension of the DP array and its meaning
2. Come up with the recurrence formula
3. Initialize the DP array (must align with dp meaning and traversal)
4. Decide the order of traversal (must align with init and recurrence formula, no out of bounds/uninitialized array access)
5. Test the above by filling an example DP
6. Always print the array for debugging
> Code 
```cpp
// edge cases
// init dp array to correct dimension
// init values
// for loop traverse, be careful about bounds!
// final return
```
> Focus: Subproblems, Inferring current state from previous states

### :star: Dynamic Programming - 1D Basics
> Hint
* Rely on some or all of previous states
* Linear sequence eof states
> Key
* Need dp arra pf size n + 1
  * If you want dp[n] to represents the state at the nth index, and your array is 0-indexed, will end up needing dp[0], dp[1]...dp[n], for a total of (n + 1) elements
* Recurrence formula require to update dp[n] require reading from some dp states for numbers smaller than n
* May require traversing through all of dp[1] ... dp[n - 1] in order to infer th state of dp[n]
```cpp
vector<int> dp(n + 1, 0);
// defualt initializatoin
for (int i = 1; i <= n; i++){
  dp[n] = // previous dp simple calculation;
  for (int j = 1; j < i; j++){
    dp[n] = max(dp[n], dp[j]) // other calculation with dp[j];
  }
}
return dp[n]; // the last element
```
> Problems
* [Integer Break](https://leetcode.com/problems/integer-break/)
* [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/)

### :star: Dynamic Programming - 2D Basics
> Hint
* Rely on some or all of previous sates
* "Rectangular" sequence of states
> Key
* dp[r][c] rel on dp of different rows and columns
* Both dimension of the dp array represnt a position of the prevoius solution
  * Whereas in Knapsack, one dimension represents a posiiton-independent value, such as the weight constraint
* 2D dp array (if traversing from left to right, up to down), often involves initializng the first row and the first column
```cpp
vector<int> dp(n + 1, 0);
// create dp array
vector<vector<int>> dp(rows, vector<int>(cols, 0));
// intialization
for (int i = 0; i < rows; i++) // init first col, be careful!
for (int j = 0; j < cols; j++) // init first row, be careful!
for (int i = 0; i < rows; i++){
  for (int j = 0; j < cols; j++){
    dp[i][j] = .. // previous states
  }
}
return dp[rows - 1][cols - 1]; // last element
```
> Problems
* [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)

### :star: Dynamic Programming - Knapsack: 0/1
> Hint
* Maximize with some constraints
* A range of items to choose from/move
* Choose 0/1 to indicate whether to include the item in the optimal solution
> Key
* Subproblem depends both on prevoius items (linear sequence) and also sub-probems with different constraints, forming a rectangular sequence
* O(nw), where n is the sequence of items, and w is the sequence (linear) of constraints
* Be really careful about the meaning of dp[r][c], the initialization, and the order of traversal
```cpp
// size: n (for number of objects/selections) * (w  + 1) to consider the case when w = 0
vector<vector<int>> dp(n, vector<int>(w + 1, 0));

// init first column
for (int i = 0; i < n; i++){
  dp[i][0] = 0; // when weight is 0, cannot carry any item so the vlaue is 0
}

// init first row
for (int j = w[0]; j <= w; j++){ // notice <= w
  dp[0][j] = value[0]; // for all plausible weight, the value will be the value of the first item
}

for (int i = 1; i < n; i++){
  for (int j = 0; j <= w; j++){
    if (j < weigt[i]) dp[i][j] = dp[i - 1][j]; // important to avoid bounds issues
    // if the current weight (allowance) doesn't even fit this item, then relinquish putting in this item
    else{
      dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
    }
  }
}
return dp[n - 1][w];
```
* Alternative: only use one row 
  * Key difference: align traversal order to traverse from the end to the front so you read *last row*'s value instead of the overwritten *current row* value
```cpp
// size: n (for number of objects/selections) * (w  + 1) to consider the case when w = 0
vector<int> dp(w + 1, 0); // initialization to all 0
for (int i = 0; i < n; i++){
  for (int j = w; j >= w[i]; j--){
    dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
  }
}
return dp[w];
```
> Problems
* d  

### :star: Dynamic Programming - Knapsacl: Complete

### :star: Greedy
> Hint
* d 
> Key
* d 
> Problems
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
> Problems
* Most linked list questions

### :star: Linked List: Two Pointers
> Hint
* One constant traversal (slow)
* Another with a constant speed or gap away
> Key
* Fast usually update with fast->next->next
* Or fast can skip ahead by n
> Problems
* [Remove Nth form End](https://leetcode.com/Problemss/remove-nth-node-from-end-of-list/)
* [Intersection](https://leetcode.com/Problemss/intersection-of-two-linked-lists/)

### :star: Linked List: Saving Next Pointer
> Hint
* manipulate the next pointer
> Key
```cpp
ListNode* next = head->next;
head->next = whatever;
```
> Problems
* Most linked list Problemss

### :star: Linked List: Cycle Detection
> Hint
* Is there a cycle
> Key
* slow and fast pointer
* if there is cycle, then they will intersect when fast has gone a full cycle ahead
* think: chasing Problems
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
> Problems
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
> Problems
* [Linked List Cycle II](https://leetcode.com/Problemss/linked-list-cycle-ii/)
 
### :star: Tree  
> Hint
* d 
> Key
* d 
> Problems
* d  

### :star: Graph 
> Hint
* d 
> Key
* d 
> Problems
* d  

### :star: Sorting
> Hint
* d 
> Key
* d 
> Problems
* d  

### :star: Searching - Nuanced Binary Search Analysis
> Hint
* Sorted nature
* Want a specific target or a viable element that is closest to the target 
> Key
* Use mid = low + (high - low) / 2 instead of mid = (high - low) / 2
  * prevents integer overflow
  * note that if there are odd number of elements between low and high (inclusive), mid will return the exact middle
  * if there are even number of elements between low and high, mid will return the mid closer to the low end
* At the end of the search, the **right** pointer will always be to the left of the **left** pointer
  * If you want to return the closest target to the left, return the **right** pointer
    * eg. Increasingly sorted array, if you want to return the biggest element that is **smaller** than target, return the **right** pointer
  * If you want the closest target to the right, return the **left** pointer
    * eg. Increasingly sorted array, if you want to return the smallest element that is **bigger** than target, return the left pointer
```cpp
int left = .., right = ..;
while (left <= right){
  int mid = left + (right - left) / 2;
  if (satisfyCriteria(mid)){
    return mid;
  }
  else if (){ // val is not large enough
    left = mid + 1;
  }
  else{ // val is too large
    right = mid - 1;
  }
}
// left pointer will be to the right of the right pointer
```
> Problems
* d  
  
### :star: Searching - Hidden Binary Search
> Hint
* No clear structure (dp recurrence formula, greedy rule)
* Usually tied to array questions
* Looking for a "best“ solution that meets a certain criteria
* A finite range of possible solutions: minVal - maxVal
* For any particular val within minVal - maxVal range, can easily determine whether the val meets the solution criteria
* **If val meets the criteria, so is all values from minVal - val or val - maxVal, revealing a "sorted" nature**
> Key
* Determine the minVal - maxVal range of solution
* Write a helper to detemrine whether a val yields a viable solution
* Use binary search to quickly determine a val that meets the criteria, and is also the best val
  * eg. want the solution that minimizes val
```cpp
int minVal = .., maxVal = ..;
while (minVal <= maxVal){
  int mid = minVal + (maxVal - minVal) / 2;
  if (satisfyCriteria(mid)){
    // mid is likely the best sol to return
  }
  else if (){ // val is not large enough
    minVal = mid + 1;
  }
  else{ // val is too large
    maxVal = mid - 1;
  }
}
// consider use case, either return left/right 

bool satisfyCriteria(int val, ...){
    // return true if val serve as a viable solution
}
```
> Problems
* [Maximum Value at a Given Index in a Bounded Array](https://leetcode.com/Problemss/maximum-value-at-a-given-index-in-a-bounded-array/description/)
* [Koko Eating Bananas](https://leetcode.com/Problemss/koko-eating-bananas/)

### :star: Prefix Sum 
> Hint
* d 
> Key
* d 
> Problems
* d  

### :star: Sliding Window  
> Hint
* Find min/max length of some window
* Reduce from O(n<sup>2</sup>) to O(n) time complexity
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
> Problems
* [Fruits Into Baskets](https://leetcode.com/Problemss/fruit-into-baskets/)

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
> Problems
* [Remove Element](https://leetcode.com/Problemss/remove-element/)

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
> Problems

### :star: KMP
> Hint
* Match two strings, once you detect a mistmatch of individual letters, use *saved matched work* to avoid rematching completely again
* Find the matching occurence of a substring in a larger string 
> Key
* Traverse the haystack in one loop
* Use the next/prefix array to know where to try matching again in the needle once an outer 
pairing fail
  * Prefix = substring that **must contain first letter** and **must not contain last letter**
    * think: traverse from the front to the back
  * Postfix = substring that **must not contain the first letter** and **must end with the last letter**
    * think: traverse from the back to the front
* Reduce time complexity from O(m * n) to O(m) + O(n)
```cpp
// populate the prefix array
// 每个element都减一，并且左移
void getNext(int* next, const string& s){
  int j = -1; // track the end of the current prefix
  next[0] = -1; // init
  for (int i = 1; i < s.size(); i++){ // track the end of the curr postfix
    while (j >= 0 && s[j + 1] != s[i]){
      j = next[j];
    }
    if (s[i] == s[j + 1]) ++j;
    next[i] = j;
  }
}

// return position of first occurence of needle in haystack
int strStr(string haystack, string needle){
    if (needle.size() == 0){
        return 0;
    }
    int next[needle.size()];
    getNext(next, needle);
    int j = -1;
    for (int i = 0; i < haystack.size(); i++){
      // next[j] contorls the j + 1's element in the needle
        while (j >= 0 && haystack[i] != needle[j + 1]){
            j = next[j];
        }
        if (haystack[i] == needle[j + 1]){
            j++;
        }
        if (j == needle.size() - 1){
            return i - needle.size() + 1;
        }
    }
    return -1;
}
```
> Problems
* [Find the Index of First Occurrence in String](https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/)
* [Repeated Substring Pattern](https://leetcode.cn/problems/repeated-substring-pattern/)



&nbsp;
> ## :notebook: Section 3: Patterns

### :star: Trading Space/Time
> Hint
* d
> Key
* d
> Problems
* d

### :star: In-Place Operations
> Hint
* Modify container structures/string, need to return modified structure
* Avoid creating a new string, reduce to O(1) space complexity
> Key
* Strings: use reverse(), resize();
> Problems
* [Reverse String 2](https://leetcode.com/Problemss/reverse-string-ii/)
* [Reverse Words in a String](https://leetcode.com/Problemss/reverse-words-in-a-string/)

### :star: Redundant Computation Elimination
> Hint
* d
> Key
* d
> Problems
* d

### :star: Redundant Space Elimination
> Hint
* Exceed Memory Limit
> Key
* Only store changed states
> Problems
* [Snapshot Array](https://leetcode.com/Problemss/snapshot-array/description/)

### :star: Early Exit
> Hint
* Original structure has (partial) sorted properties
* Reduce time complexity from O(n<sup>2) to O(n)
* Find all elements within a structure that satisfy some condition
> Key
* think: if position [x][y] meets a condition, can you infer about whether the surrounding directions (same row, same col, to the left/right/up/down) meet/does not meet this condition?
> Problems
* [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/Problemss/count-negative-numbers-in-a-sorted-matrix/)

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
> Problems
* [Can Make Arithmetic Progression From Sequence](https://leetcode.com/Problemss/can-make-arithmetic-progression-from-sequence/)
* [Find All Duplicates in an Array](https://leetcode.com/Problemss/find-all-duplicates-in-an-array/)

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
> Problems
* [Intersection of Two Arrays](https://leetcode.com/Problemss/intersection-of-two-arrays/)

### :star: Avoid Repetitions
* 0-index: the element after the first n elements have the index n

### :star: Other Intuitions
* 0-index: the element after the first n elements have the index n
 
&nbsp;
> ## :notebook: Section 4: Contorl Flow Management
### :star: If Control (Bounds Checking)
* replace for loop

### :star: For/While Precise Control
* replace for loop
* TODO: cool (nested expansion)

&nbsp;
> ## :notebook: Section 5: C++ Fundamentals

### :star: String Library
* reverse: done in place, O(n)
  * range: [)
```cpp
reverse(v.begin() + i, v.begin() + k + 1); // reverse ith to kth
reverse(v.begin() + i, v.begin() + i + k);  // reverse ith for a length of k
```
* s.substr(start, length) 
  * default to using integers as index (not iterators)
  * starting from start, take length
  * think: s.substr(startIndex, endIndex - startIndex + 1)
* s.substr(start) 
  * take from start til the end
  * iterator allowed
```cpp
std::string str("This is an example sentence.");
std::cout << str.substr(5, 6 - 5 + 1) << std::endl; // is
std::string str("This is an example sentence.");
std::cout << str.substr(str.find("example")) << std::endl; // example sentence
```
```cpp
reverse(v.begin() + i, v.begin() + k + 1); // reverse ith to kth
reverse(v.begin() + i, v.begin() + i + k);  // reverse ith for a length of k
```
* be careful about using insert(), erase() operations in a for loop, these are O(n) operations, making the overall time complexity O(n<sup>2</sup>)
* resize(lenght, defaultChar)
  * useful when knowing the final return size so resize first
```cpp
string s = "wesdf";
s.resize(s.size() * 2);
s.resize(s.size() * 2, 'a');
```
* += safely use with another string, single char, or char*
* s.insert(pos, subString) 
```cpp
string s = "to be question";
string s2 = "the ";
s.insert(6, s2); // to be the question
// starting from pos
```
* s.erase(start, len), s.erase(start), s.erase（iter), s.erase(startIter, endIter)
  * for start and end, it is [) range
  * for the single start element, remove everything at and after start
  * for the single iter argument, you remove exactly that element
```cpp
string str("This is an example sentence.");
str.erase(10, 8); // This is an sentence
str.erase(str.begin() + 9); // This is a semtence
str.erase(str.begin() + 5, str.end() - 9); // This sentence
```
* s.replace(start, len, newString)
  * replace from start for len amount of the original string by the new string
```cpp
string str("This is an test sentence.");
string str2 = "n example";
str.replace(9, 5, str2); // "n test" replaced with "n example"
```
* s.find(subStr, startPos) return the first position of the subStr found at or after startPos
  * find return an integer value (not an iterator)
  * technically a size_t but you can write it as the integer type
```cpp
string str("Needles inside Needles");
auto found = str.find("Needles");
if (found != string::npos){ // must include npos check!
  std::cout << found << std::endl; // note that npos corresponds to size_t (can think of as int in this case)
}
found = str.find("Needles", found + 1); // find the next occurrence by simply adding 1 to previous res
```
* s.find_first_of("sequence of chars", startPos) return the first occurrence of any letter in the sequence of chars starting form the startPos
```cpp
string str("Replace all vowels");
int found = str.find_first_of("aeiouu");
while (found != string::npos){
  std[found] = "*";
  found = str.find_first_of("aeiou", found + 1);
}
```
* s.find_first_not_of("seq of chars", startPos) return the first occurrence of a letter that is not in the seq of chras starting from the startPos
```cpp
string str("   find first non space");
int found = str.find_first_not_of(" \t\f\v\n\r");
```
* s.find_last_of("seq of chars", endingPos) return the last occurrence of anything in the seq of character **at or before** the endingPos
```cpp
std::string str("/user/bin/man");
int found = str.find_last_of("/");
if (found != std::string::npos){
  std::cout << "file name: " << str.substr(found + 1); // man
}
```
* s.find_last_not_of("seq of chars", endingPos) return the last occurrence of anything not in the seq of character **at or before** the endingPos
```cpp
std::string str("remove trailing spaces  ");
int found = str.find_last_not_of(" \t\f\v\n\r");
if (found != string::npos){
  str.erase(found + 1);
}
```
* remove all leading and trailing spaces
```cpp
std::string trim(const std::string& str){
    std::string whitespaces(" \t\f\v\n\r");
    const auto strBegin = str.find_first_not_of(whitespaces);
    if (strBegin == std::string::npos){
        return "";
    }
    const auto strEnd = str.find_last_not_of(whitespaces);
    return str.substr(strBegin, strEnd - strBegin + 1);
}
```

### :star: Vector Library
* find max/min
```cpp
int maxVal = *max_element(v.begin(), v.end()), minVal = *min_element(v.begin(), v.end());
reverse(v.begin() + i, v.begin() + i + k);  // reverse ith for a length of k
```
* constructor to make vector of size n fill with default content
  * invoked as vector<type>(size, defaultContent)
```cpp
vector<int> v;
v(10, 0); // illegal: does not explicitly use vector constructor
v = vector<int>(10, 0); // ok
```
* emplace_back vs. push_back
  * push_back(x): content of x is copied/moved to the new element
    * call constructor to create a temporary object
    * construct a copy of the temporary object in the memory of the container
    * if the move constructor exist, call the move constructor (since the temporary object is rvalue)
    * otherwise call the copy constructor
    * call destructor to destroy the temporary object after copy
  * emplace_back(x): the new element is constructed in place using x as the argument for its constructor
    * directly takes constructor argument
    * avoids constructing/destructing temporary object
    * very efficient when inserting large amount of objects or each object is time-consuing to create/destroy


### :star: Hashset(Unordered_Set) Library
* iterate through hashset
```cpp
unordered_set<int> m;
for (const auto& num: m){
  cout << num << endl;
}
string s = "abcde";
```
* s.count(num), will return 1 or 0

### :star: Set Library
* iterate through hashset
```cpp
unordered_set<int> m;
for (const auto& num: m){
  cout << num << endl;
}
string s = "abcde";
```
* good for strange keys like vector<int>, or pair<int, int>
```cpp
unordered_set<vector<int>> s; // illegal!
set<vector<int>> s; // ok
```
* s.insert(elem), s.erase(elem)

### :star: Map Library (Red-Black Tree)
* good for strange keys like vector<int>, or pair<int, int>
```cpp
unordered_map<vector<int>, int> m; // illegal!
map<vector<int>, int> m; // ok
```
* lower_bound(k) return an iterator for element at k, or if k doesn't exist, return the smallest elem greater than k
* upper_bound(k) return an iterator pointing to the smalelst elem greater than k
  * lower_bound(k) and upper_bound(k) have the same behavior when k does not exist
    * both return the smallest element greater than k
  * if k is found, lower_bound(k) will return elem that is exactly k, but upper_bound(k) will still return the smallest elem that is greater than k

```cpp
std::map<int, int> m{{1,1}, {2, 2}, {3, 3}, {5, 5}, {6, 6}};
auto itr = m.lower_bound(4);
std::cout << (*itr).first << std::endl; // smallest elem greater than 4
itr = m.upper_bound(4); 
std::cout << (*itr).first << std::endl; // smallest elem greater than 4

itr = m.lower_bound(3);
std::cout << (*itr).first << std::endl; // 3 is found
itr = m.upper_bound(3);
std::cout << (*itr).first << std::endl; // still return smallest elem greater than 3
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
* use long long int when integer overflow
```cpp
long long int a = largeNum, b = largeNum, c = largeNum;
long long int res = (a + b) * c / 2;
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
### :star: Classes
* TODO: template
* TODO: name shadowing

### :star: Structs
* TODO: diff between classes and struct
* TODO: template

### :star: Correctness Issues
* variable and function should not have the same name
  * will return: int cannot be used as a function pointer error
* declared variables must be initialized before used in the future
```cpp
int a;
int b = a + 1; // bad! a can be an undefined value
```
* when dealing with a vector of nested data structures, be carefulthat if you want to retrive that 
inner data structure, you must do a vector access
```cpp
vector<map<int, int>> maps; // a vector of map
maps.find(5); // illegal! 
maps[0].find(5); // legal: each elem is a map
```
* must use parenthesis to force dereference a pointer before accessing its value
```cpp
auto itr;
*itr.second; // illegal！
(*itr).second; // ok!
(*(--itr)).second; // correct way to dec the ptr, deref, and access second
```
* if you want a while loop to keep going if something is positive, specify while (x > 0)
```cpp
int x = -10;
while (x){ // illegal way to specify keep going as long as x > 0
// will be in the loop even if x is negative
// only use while(x) if you should proceed when x is either positive/negative
}
```


### :star: Others
* always want var a to be larger than b
```cpp
if (b > a) swap(a, b);
```
* covering range [-n, n] need (2n + 1) elements
* array index misalignment
  * eg. if use index i to represent to represent sequence (ith + 1), must access arr using A[seq - 1]

### :star: Utils
* print vector (1D/2D)
* covering range [-n, n] need (2n + 1) elements
* array index misalignment
  * eg. if use index i to represent to represent sequence (ith + 1), must access arr using A[seq - 1]

&nbsp;
> ## :notebook: Section 7: C++ Advanced Usages
### :star: std::function
```cpp
struct Foo{
    Foo(int num): num_(num) {}
    void print_add(int i) const {std::cout << num_ + i << '\n';}
    int num_;
};

void print_num(int i){
    std::cout << i << '\n';
}

struct PrintNum{
    void operator()(int i) const{
        std::cout << i << '\n';
    }
};

int main() {
    // store a normal function
    std::function<void(int)> f_display = print_num;
    f_display(-9);
    
    // storing a lambda
    std::function<void()> f_display_42 = [](){print_num(42);};
    f_display_42();
    
    // store a call to a member function
    std::function<void(const Foo&, int)> f_add_display = &Foo::print_add;
    const Foo foo(314159);
    f_add_display(foo, 1);
    f_add_display(359, 1);
    
    // store a call to data memebr access
    std::function<int(Foo const&)> f_num = &Foo::num_;
    std::cout << "num_:" << f_num(foo) << std::endl;
    
    // store a call to a funciton object
    std::function<void(int)> f_display_obj = PrintNum();
    f_display_obj(18); 
    
    // using function obj in lambda     
    auto factorial = [](int n){
        std::function<int(int)> fac = [&](int n){return (n < 2) ? 1 : n * fac(n - 1);};
        return fac(n);
    };
    for (int i{5}; i != 8; ++i){
        std::cout << i << "! = " << factorial(i) << "; ";
    }
    std::cout << '\n';
    return 0;
}
```

&nbsp;
> ## :notebook: Section 7: Style
### :star: Optimization Tips
* raw array faster
```cpp
int record[26] = {0};  // instead of vector<int> record(26, 0)
```
* function design
  * void return, but pass in the actual value to change as a pointer
    * good for updating an array
    * pass in the pointer to the array
    * be careful about agreeing on the size of the raw array in the caller and callee
```cpp
// populate the passed in array
void getRecord(int* rec){
  for (int i = 0; i < 26; i++){
    // update rec;
  }
}
int res[26];
getRecord(res); // pass in the newly created array pointer
// access updated res
``` 
  * void return, but pass in the actual value to change as a reference
    * good for updating non-raw-array type
    * pass in the value to update as a ref
    * will need to init the structure to the correct size in the caller before using the helper function
```cpp
// populate the passed in array
void getRecord(vector<int>& v){
  for (int i = 0; i < 26; i++){
    // update rec;
  }
}
vector<int> rec(26, 0);
getRecord(rec); // pass in the newly created vec by ref
// access updated rec
``` 
  * both allow you to save space by avoiding creating a new copy and returning the copy
* Congregate if conditions, combine multiple conditions if their resulting actions is the same/can be generalized
```cpp
if (i == 0) return 0;
if (i == 1) return 1; // not op
if (i == 0 || i == 1) return i; // ok op
if (i <= 1) return i; // very op
``` 
* for heap allocated object, such as a new list node, call delete
```cpp
Node* n = new Node(0, 2);
if (n->val == 0){
  // n no longer useful
  delete n;
}
``` 
* updating an already existing structure to the max throughout a for loop: can avoid creating a temp and assigning temp to max; modify the structure directly
```cpp
dp[0]; // want to change this to the max
for (int i = 0; i < n; i++){
  dp[0] = max(dp[0], max(i * (n - i), i * dp[n - i]));
}
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
int a = 1, b = a + 1, c = a + b; // allowed
```
* use +=, -=, *=, /= whenever possible
* combine common logic (common sub functions -> condense to one general funcion), combine if conditionals as much as possible

### :star: Clarity Tips
* add temp variable to store expressions if used multiple time/obscure

> ## :notebook: Section 8: Approach/Mindset
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
  
Overall Plan:
* 1st Pass: carefully take notes on knowledge/correctness/style for leetcode master questions, do daily leetcode (don't sweat about really good performance/style)
* 2nd Pass: DP Deep Dive, Backtracking Deep Dive, Greedy Deep Dive
* 3rd Pass: Arrays Deep Dive (Two Pointers, Sliding Window, Prefix Sum)
* 4th Pass: Only grill on hard questions/timed practices
* 5th Pass: Object-Oriented Design Questions
  

# :pencil: Daily Log
* 6/5: swap, reverse, remove_node, intersection, design, delete n, cycle 2, straight line (8)
* 6/6: can_make_arith, find_dup, flip_bits (3)
* 6/7: common, intersection, happy num, two sum, four sum, ransom, count neg (7)
* 6/8: longest arith seq, three sum, bsearch, reverse string 1, reverse string 2 (5)
* 6/12: finish KMP, another KMP problem, string library summary, dp basics review, fib, stairs, stairs with cost, min paths, min paths 2, min cost path 2, integer break
