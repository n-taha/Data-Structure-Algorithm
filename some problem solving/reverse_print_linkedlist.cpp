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

void user_input(Node* &head , Node* &tail , int value){
  Node* newnode = new Node(value);
  if(head == NULL){
    head = newnode;
    tail = newnode;
  }else{
    tail->next = newnode;
    tail = newnode;
  }
}

void reverse_print(Node* &head){
    if(head == NULL){
        return;
    }
    reverse_print(head->next);
    cout << head->value << " ";

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
        user_input(head,tail,value);
    }
    reverse_print(head);
}