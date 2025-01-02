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

void insert_value(Node* &head , Node* &tail , int value){
  Node* newnode = new Node(value);
  if(head == NULL){
    head = newnode;
    tail = newnode;
  }
  tail->next = newnode;
  tail = newnode;
}


bool checking_sorted_or_not(Node* &head){
  if(head == NULL || head->next == NULL){
    return true;
  }

 Node* temp = head;

  while(temp->next != NULL){
    if(temp->value > temp->next->value){
        return false;
    }
    temp = temp->next;
  }

  return true;

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
        insert_value(head , tail , value);
    }

   cout << ((checking_sorted_or_not(head) ? "YES" : "NO"));
}