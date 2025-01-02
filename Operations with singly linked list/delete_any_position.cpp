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

void input_linkedlist(Node* &head , Node* &tail , int value){
  Node* newnode = new Node(value);
  if(head == NULL){
    head = newnode;
    tail = newnode;
  }
  tail->next = newnode;
  tail = newnode;
}

void deletenode(Node* &head , int idx){
  Node* temp = head;
  for(int i = 0 ; i < idx - 1 ; i++){
    temp = temp->next;
  }
  Node* deletenode = temp->next;
  temp->next = temp->next->next;
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
        input_linkedlist(head , tail , value);
    }
    deletenode(head , 2);
    print_in(head);

    return 0;
}