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

## Saving the next pointer
### hint:
* manipulate the current pointer such that the original structure (where is the next node) will be lost
### key:
* ListNode* next = curr->next, and then manipulate curr->next


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


## Edge Case: Cycle Start Detection
### hint:
* the start of the cycle?
### key:
* 

## Other Notes:
* make sure to delete newly created ListNodes and set the pointer to nullptr
  * simply do: ListNode* d = new ListNode(0), and later delete d
  * delete d; d = nullptr;
* while (n--): elegant structure for 0-indexed traversal
  * start pointer at the head node
  * will traverse forward exactly n time
  * same effect as for (int i = 0; i < n; ++i)
  * while (n--) curr = curr->next: will allow you get curr pointer to the nth node (0-indexed) counting from the head; 1->2->3->4
  