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

void insert_optimize(Node* &head , Node* &tail , int value){

   Node* newnode = new Node(value);

   if(head == NULL){
    head = newnode;
    tail = newnode;
   }

  tail->next = newnode;
  tail = newnode;
}



void print_in(Node* &head){
   while(head != NULL){
    cout << head->value << " ";
    head = head->next;
   }

}



int main(){

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* tail = new Node(30);

  head->next = a;
  a->next = tail;

  insert_optimize(head , tail , 40);
  insert_optimize(head , tail , 60);
  print_in(head);

  cout << endl  << "Tail : "<< tail->value << " ";


  return 0;

}