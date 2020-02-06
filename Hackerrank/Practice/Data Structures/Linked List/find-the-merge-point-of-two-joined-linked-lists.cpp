#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    unordered_set <SinglyLinkedListNode *> myset;
    unordered_set<SinglyLinkedListNode *>::iterator valnode;
    while (head1) {
        myset.insert(head1->next);
        head1 = head1->next;
    }
    while (head2) {
        if ((valnode = myset.find(head2->next)) != myset.end()) {
            break;
        }
        head2= head2->next;
    }
    return (*valnode)->data;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int tests, index, llist1_count, temp, llist2_count;
    cin >> tests;
    
    while (tests--) {
        SinglyLinkedList* llist1 = new SinglyLinkedList();
      	SinglyLinkedList* llist2 = new SinglyLinkedList();

        cin >> index;

        cin >> llist1_count;
        for (int i = 0; i < llist1_count; i++) {
            cin >> temp;
            llist1->insert_node(temp);
        }
      
        cin >> llist2_count;
        for (int i = 0; i < llist2_count; i++) {
            cin >> temp;
            llist2->insert_node(temp);
        }
      
      	SinglyLinkedListNode* ptr1 = llist1->head;
      	SinglyLinkedListNode* ptr2 = llist2->head;
      
      	for (int i = 0; i < llist1_count; i++) {
            if (i < index) {
          		ptr1 = ptr1->next;
            }
        }
      
      	for (int i = 0; i < llist2_count; i++) {
          	if (i != llist2_count-1) {
          		ptr2 = ptr2->next;
            }
        }
      
      	ptr2->next = ptr1;

        fout << findMergeNode(llist1->head, llist2->head) << "\n";
    }

    fout.close();

    return 0;
}
