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
 