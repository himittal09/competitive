class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode (int x): data{x}, next{nullptr} {}
};

class MyLinkedList {
    ListNode *head;
    ListNode **dblPtr;
    int nodeCount;
public:
    /** Initialize your data structure here. */
    MyLinkedList(): head {nullptr}, nodeCount {0}, dblPtr {&head} {}
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index >= nodeCount)
        {
            return -1;
        }
        ListNode *ptr = head;
        while (index)
        {
            ptr = ptr->next;
            index--;
        }
        return ptr->data;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        ListNode *node = new ListNode(val);
        node->next = head;
        head = node;
        nodeCount++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode **ptr = dblPtr;
        while (*ptr)
        {
            ptr = &(*ptr)->next;
        }
        ListNode *node = new ListNode(val);
        *ptr = node;
        nodeCount++;
    }
    
    /** Add a node of value val before the index-th node in the linked list.
     * If index equals to the length of linked list, the node will be appended to the end of linked list.
     * If index is greater than the length, the node will not be inserted.
     * If index is negative, the node will be inserted at the head of the list. */
    void addAtIndex(int index, int val) {
        if (index == nodeCount)
        {
            addAtTail(val);
            return;
        }
        else if (index > nodeCount)
        {
            return;
        }
        else if (index < 0)
        {
            addAtHead(val);
            return;
        }
        ListNode **ptr = dblPtr;
        while (index)
        {
            ptr = &(*ptr)->next;
            index--;
        }
        ListNode *node = new ListNode(val);
        *ptr = node;
        nodeCount++;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index+1 > nodeCount)
        {
            return;
        }
        if (index == 0)
        {
            ListNode *newHead {head->next};
            delete(head);
            head = newHead;
            return;
        }
        ListNode **ptr = dblPtr;
        while (*ptr && index)
        {
            ptr = &(*ptr)->next;
            index--;
        }
        ListNode *nodeToDelete = *ptr;
        ptr = &(*ptr)->next;
        delete (nodeToDelete);
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */