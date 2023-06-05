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
        while (index--){
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val){
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = _dummy->next;
        _dummy->next = newNode;
        _size++;
    }

    void addAtTail(int val){
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* curr = _dummy;
        while (curr->next != NULL){
            curr = curr->next;
        }
        curr->next = newNode;
        _size++;
    }

    void addAtIndex(int index, int val){
        if (index > _size) return;
        if (index < 0) index = 0;
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* curr = _dummyHead;
        while (index--){
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        _size++;
    }

    void deleteAtIndex(int index){
        if (index >= _size || index < 0) return;
        LinkedNode* curr = _dummy;
        while (index--) curr = curr->next;
        LinkedNode* tmp = curr->next;
        curr->next = curr->next->next;
        delete tmp;
        tmp = nullptr;
    }

    void printLinkedList(){
        LinkedNode* cur = _dummy;
        whlie (curr->next){
            cout << curr->next->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
}