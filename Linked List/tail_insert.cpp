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


 void insert_in_tail(Node* &head , int value){
   Node* newnode = new Node(value);

   if(head == NULL){
     head = newnode;
   }

   Node* temp = head;

   while(temp->next != NULL){
     temp = temp->next;
   }

   temp->next = newnode;

 }

 void printin(Node* &head){

  while(head != NULL){
    cout << head->value << " ";
    head = head->next;
  }

 }

int main(){

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);

  head->next = a;
  a->next = b;

  insert_in_tail(head , 40);
  printin(head);
}