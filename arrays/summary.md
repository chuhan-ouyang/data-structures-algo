### Sliding Window
# hint:
  + Min length (a window), by moving the end pointer to the right, you know that to find the minimum length it only makes sense to move the start pointer to the right (as far as possible) to get a possibly smaller length
  + key: replace n*2 for loop with one for loop
# key: 
  + iterate through the end of the sliding window because guarantee new window work and only need to move front pointer forward if needed
    + does not make sense to iterate through the start because you subtract the previous (out of window) but you may or may not need to add the new
start element
    - but if you iterate through the end, you definitely just add the end
  + decide how you are going to use a while loop to dynamically adjust the start positio
  - while (condition meet): keep shrinking window until condition is no longer met
  + when a valid window is found, update the best counter
  + each time you add a new element (终端) update the running sum


## Slow and Fast Pointer
# hint:
  * a moving forward and another tracking index
# key:
  + fast pointer iterate through each element
  + slow pointer keep track of some "valid" condition, more selective in moving
  

## Left and Right Pointers
# hint: compare two items on the very sides
# key:
  + one pointer start at the left
  + another start at the very right
  + while the two pointers haven't met 
  - for (int left = 0; right = size - 1; left <= right;){}
  + inside the for loop dynamically do left++ or right-- as needed
 

## Space Opt: Neg Indexing
# hint: O(n) solution achievable with hashset, but want O(1) solution, and the range of possible elements fit in the container's size
# key:
  * iterate through all elements with a for loop
  * invariant: if nums[i] is negative, then the value "i" has been visited before -> depending on the problem, you may report false now if you don't want duplicates
  * if you have visited an element, then mark it as negative (don't incr/decr vals)
  * if you encounter a neg element, you know this value has been visited before
  * always use abs val to retrive nums[i], because nums[i] might be reversed before due to a previous element literally of the size nums[i] being visited before 
  * you still care about the current value, whether it be neg/pos, because the marking of the negative occurs due to a prevoiusly seen element whose value is the same as the curr index is independent of this current value
  * preq: all elements must be converted to positive! 0 is not acceptable because 0 = -0
# problems:
  * find dups
  * can make arithmetics


## Traversing Sorted Array
# hint: the array is somewhat sorted, want to optimize to a solution that is better than O(n^2)
# key: 
* figure out a global sequence based on the sorting, can you converge to a zigzag order:
* if knowing that a number is positive/negative, what does this convey about the pos/neg/smaller/larger information about the surrounding rows and columns?
* going across the 8 directions (neighbors), what is guaranteed in terms of smaller/larger?
# problems:
* count neg


## Time Op: O(n^2) to O(n) or O(m + n)
# hint: large array, but we don't want to traverse the entire array!
# key:
* don't be so restrictive and think that you can only traverse one row/column
* figure out a way to move the two pointers for row and col only in one direction
  * eg. row ptr can only move down, and col pointer can only move right, so you never have the col pointer moving back and forth between 0 and max col (hence not a m * n sol)
* for one dim (row/col), you still sequentially progress, however, see if for the other direction, you can "safely eliminate"
  * eg. in the count neg problem, once you know that a number is negative, all numbers to the right and down must be negative (forming a negative sub-array), so to count the total number of positive numbers, move row pointer upward since this row is no longer relevant
* think: early breaking!
# problems:
* count neg