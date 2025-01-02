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

void sorting_list(Node* &head){
  if(head == NULL){
    return;
  }
  for(Node* i = head ; i != NULL ; i = i->next){
    for(Node* j = i->next ; j != NULL ; j = j->next){
        if(i->value < j->value){
            swap(i->value,j->value);
        }
    }
  }
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
        user_input(head, tail , value);
    }
    sorting_list(head);
    print_in(head);
}