## Adding Dummy Node
### hint:
* need to return the new head node
* sometimes the new head node is the original head, but othertimes modified
* easier to generalize by creating a dummy, and returning dummy->next in the end
### key:
* init new dummy to link to the head
* delete dummyHead at the end
  * head = dummy->next
  * delete dummy
  * return head

## Slow and Fast Pointer
### hint:
* one constant traversal (slow)
* another with a constant speed or gap away
### key:
*

## Cycle Detection
### hint:
* is there a cycle?
### key:
*

## Basic Pattern: Reverse
### hint:
* need when traversing in a different order
### key:
*

## Edge Case: Cycle Start Detection
### hint:
* the start of the cycle?
### key:
*

## Other Notes:
* make sure to delete newly created ListNodes
  * simply do: ListNode* d = new ListNode(0), and later delete d
* while (n--): elegant structure for 0-indexed traversal
  * start pointer at the head node
  * will traverse forward exactly n time
  * same effect as for (int i = 0; i < n; ++i)
  