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
 