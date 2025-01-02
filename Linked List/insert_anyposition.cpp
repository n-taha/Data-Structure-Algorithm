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

void insert_in_anyposition(Node* &head , int idx , int value){

    Node* newnode = new Node(value);

  Node* temp = head;
  for(int i = 0 ; i < idx - 1 ; i++){
     temp = temp->next;
  }

  newnode->next = temp->next;
  temp->next = newnode;

}

void print_in(Node* &head){



}

int main(){

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);

  head->next = a;
  a->next = b;

  insert_in_anyposition(head , 2 , 100);
  insert_in_anyposition(head, 3, 200);
  insert_in_anyposition(head,5,300);
  print_in(head);

}