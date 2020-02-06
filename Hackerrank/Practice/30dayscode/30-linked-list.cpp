#include <iostream>
#include <cstddef>
using namespace std;	

class Node {
    public:
        int data;
        Node* next;
        Node (int d) {
            data=d;
            next=NULL;
        }
};

class Solution{
    public:

      Node* insert(Node* head,int data) {
          Node *headcpy = head;
          Node *node = new Node(data);
          if (head == NULL) {
              return node;
          }
          while (head->next) {
              head = head->next;
          }
          head->next = node;
          return headcpy;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T--){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}