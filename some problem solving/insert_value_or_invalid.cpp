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



void user_input(Node* &head , Node* tail , int value){

  Node* newnode = new Node(value);
  if(head == NULL){
    head = newnode;
    tail = newnode;
  }else{
    tail->next = newnode;
    tail = newnode;
  }

}



void insert_in_head(Node* &head , int value){

   Node* newnode = new Node(value);
   newnode->next = head;
   head = newnode;

}




void insert_in_tail(Node*head , Node* &tail , int value){
    Node* newnode = new Node(value);

   if(head == NULL){
    head = newnode;
    tail = newnode;
   }

   tail->next = newnode;
   tail = newnode;

}



void insert_any_position(Node* &head , int index , int value){

  Node* newnode = new Node(value);
  Node* temp = head;
  for(int i = 0 ; i < index -1 ; i++){
    temp = temp->next;
   }
   newnode->next = temp->next;
   temp->next = newnode;

}

int size_input(Node* head){
  Node* temp = head;
  int size = 0;
  while(temp != NULL){
    size++;
    temp = temp->next;
  }
  return size;
}




void print_in(Node* &head){
  Node* temp =head;
  while(temp != NULL){
    cout << temp->value;
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

    int size = size_input(head);
    int index;
    while(cin >> index >> value){
        if(index > size){
            cout << "Invalid";
            continue;
        }

        else if(index == size){
            insert_in_tail(head,tail,value);
        }
        else if(index == 0){
            insert_in_head(head,value);
        }
        else{
            insert_any_position(head,index,value);
        }
        print_in(head);
    }

}