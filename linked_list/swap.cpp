class Solution{
    public:
        ListNode* swapTwo(ListNode* head){
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* curr = dummy;
            while (curr->next != NULL && curr->next->next != NULL){
                ListNode* tmp = curr->next;
                ListNode* tmp1 = curr->next->next->next;
                curr->next = curr->next->next;
                curr->next->next = tmp;
                curr->net->next->next = tmp1;
                curr = curr->next->next;
            }
            return dummy->next;git add .
        }
}