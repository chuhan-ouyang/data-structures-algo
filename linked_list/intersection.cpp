class Solution{
    public:
        ListNode* getIntersectionNode(ListNode* headA, ListNode* headB){
            ListNode* currA = headA;
            ListNode* currB = headB;
            int lenA = 0, lenB = 0;
            while (currA != NULL){
                lenA++;
                currA = currA->next;
            }
            while (currB != NULL){
                lenB++;
                currB = currB->next;
            }
            currA = headA;
            currB = headB;
            if (lenB > lenA){
                swap(lenA, lenB);
                swap(curA, curB);
            }
            int gap = lenA - lenB;
            while (gap--){
                currA = currA->next;
            }
            while (currA != NULL){
                if (currA == currB) return currA;
                currA = currA->next;
                currB = currB->next;
            }
            return NULL;
        }
}