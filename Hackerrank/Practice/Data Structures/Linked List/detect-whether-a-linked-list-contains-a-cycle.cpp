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

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *single = head, *dbl = head;

    if (!head) {
        return false;
    }

    while (dbl && dbl->next) {
        single = single->next;
        dbl = dbl->next->next;
        if (single == dbl) {
            return true;
        }
    }
    return false;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int tests, index, llist_count, llist_item;
    cin >> tests;

    while (tests--) {

        SinglyLinkedList* llist = new SinglyLinkedList();

        cin >> index;
        cin >> llist_count;

        for (int i = 0; i < llist_count; i++) {
            cin >> llist_item;
            llist->insert_node(llist_item);
        }
      
      	SinglyLinkedListNode* extra = new SinglyLinkedListNode(-1);
      	SinglyLinkedListNode* temp = llist->head;
      
      	for (int i = 0; i < llist_count; i++) {
            if (i == index) {
          		extra = temp;
            }
          	
          	if (i != llist_count-1) {
          		temp = temp->next;
            }
        }
      
      	temp->next = extra;

        bool result = has_cycle(llist->head);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
