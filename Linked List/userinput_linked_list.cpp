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


  void insert_user_input(Node* &head , Node* &tail , int value){
    Node* newnode = new Node(value);
    Node* temp = head;

    if(temp->next == NULL){
        temp = newnode;
         tail = newnode;
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
    cin >> value;

    while(1){
        if(value == -1){
          break;
        }

      insert_user_input(head , tail , value);

    }

    print_in(head);

    return 0;

  }