class Solution{
    public:
        ListNode* removeElements(ListNode* head, int val){
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* curr = dummy;
            while (curr->next != NULL){
                if (curr->next->val == val){
                    ListNode* tmp = curr->next;
                    curr->next = curr->next->next;
                    delete tmp;
                }
                else{
                    curr = curr->next;
                }
            }
            head = dummy->next;
            delete dummy;
            dummy = nullptr;
            return head;
        }
}