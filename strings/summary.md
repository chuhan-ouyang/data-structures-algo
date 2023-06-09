# Strings Notes
# String Notes

## Adding Dummy Node
### hint:
* need to return the new head node
* sometimes the new head node is the original head, but othertimes modifiied
  * eg. head pointer used for traversal (lost head)
* easier to generalize by creating a dummy, and returning dummy->next in the end
### key:
* init new dummy to link to the head
* delete dummyHead at the end
  * head = dummy->next
  * delete dummy
  * dummy = nullptr
  * return head
### problems:
  * remove node
  * design linked list
  * swap 2 nodes
## Saving the next pointer
### hint:
* manipulate the current pointer such that the original structure (where is the next node) will be lost
### key:
* ListNode* next = curr->next, and then manipulate curr->next
### problems:
  * reverse linked list
  * swap two nodes



## Slow and Fast Pointer
### hint:
* one constant traversal (slow)
* another with a constant speed or gap away
### key:
* fast usually update with fast->next->next or skip ahead n by doing while(n--) fast = fast->next
### problems:
  * delete nth node from the end
  * median of linked list
  * intersection

## Cycle Detection
### hint:
* is there a cycle?
### key:
* slow and fast pointer, if there is cycle, then they will intersect at iteration: cycle length
  * think: chasing problem, the fast skips forward an entire cycle
### problems:
  * linked list cycle 2


## Edge Case: Cycle Start Detection
### hint:
* the start of the cycle?
### key:
* 2 (x + y) = x + y + y + z, so x = z
* after intersecting once (which definitely will happen if there is a cycle), then end and start can traverse in sync (the same distance x, z) and will meet at the start again
### problems:
  * linked list cycle 2

## Other Notes:
* make sure to delete newly created ListNodes and set the pointer to nullptr
  * simply do: ListNode* d = new ListNode(0), and later delete d
  * delete d; d = nullptr;
* while (n--): elegant structure for 0-indexed traversal
  * start pointer at the head node
  * will traverse forward exactly n time
  * same effect as for (int i = 0; i < n; ++i)
  * while (n--) curr = curr->next: will allow you get curr pointer to the nth node (0-indexed) counting from the head; 1->2->3->4
* whenever you need (especially for fast pointer) to access node and node->next, use the following check while (node && node->next)
  