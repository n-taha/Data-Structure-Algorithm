#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
       this->value = value;
       this->next = NULL;
    }
};

void input_linked_list(Node* &head , Node* &tail , int value){
  Node* newnode = new Node(value);

  if(head == NULL){
    head = newnode;
    tail = newnode;
  }
  tail->next = newnode;
  tail = newnode;
}

void delete_head(Node* &head){
  Node* deletenode = head;
  head = head->next;
  delete deletenode;
}

void print_in(Node* &head){
   while(head != NULL){
    cout << head->value << " ";
    head = head->next;
   }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int value;

    while(true){
        cin >> value;
        if(value == -1){
            break;
        }
        input_linked_list(head , tail , value);
    }
    delete_head(head);
    print_in(head);
}