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



void insert_in_tail(Node* &head , Node* &tail , int value){
   Node* newnode = new Node(value);

   if(head == NULL){
    head = newnode;
    tail = newnode;
   }

   tail->next = newnode;
   tail = newnode;

}



void print_in(Node* &head){
   Node* temp = head;
   while(temp != NULL){
    cout << temp->value << " ";
    temp = temp->next;
   }
}


void reverse_print(Node* temp){

 if(temp == NULL){
    return;
 }

 reverse_print(temp->next);
 cout << temp->value << " ";

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

    insert_in_tail(head , tail , value);
}

//   print_in(head);
  reverse_print(head);

}