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

void reverse_list(Node* &head , Node* &tail , Node* temp){
  if(temp->next == NULL){
    head = temp;
    return;
  }
  reverse_list(head,tail,temp->next);
  temp->next->next = temp;
  temp->next = NULL;
  tail = temp;
}

void print_in(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp->value << " ";
    temp = temp->next;
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
        user_input(head,tail,value);
    }

    reverse_list(head,tail,head);
    print_in(head);

    cout << endl << head->value << endl;
    cout << tail->value << endl;

}