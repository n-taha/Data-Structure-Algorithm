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

 void insert(Node* &head , int value){
     Node* newnode = new Node(value);
     newnode->next = head;
     head = newnode;
 }

 void printin(Node* head){

   Node* temp = head;

  while(temp != NULL){
    cout << temp->value << " ";
    temp = temp->next;
  }




 }

 int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert(head , 100);
    insert(head , 200);
    insert(head,300);
    printin(head);
 }