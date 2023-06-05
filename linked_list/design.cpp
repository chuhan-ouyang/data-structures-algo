class myLinkedList{
    private:
        int _size;
        LinkedNode* _dummy;

    public:
        struct LinkedNode{
            int val;
            LinkedNode* next;
            LinkedNode(int val): val(val), next(nullptr){};
        }
    
    myLinkedList(){
        _dummy = new LinkedNode(0);
        _size = 0;
    }

    int get(int index){
        if (index >= _size || index < 0){
            return -1;
        }
        LinkedNode* curr = _dummy->next;
        // 1->2->3
        // 0 1 2
        // curr ptr at head
        // while (2--):
    }
}