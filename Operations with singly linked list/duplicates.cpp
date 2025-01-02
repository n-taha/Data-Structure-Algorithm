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

 bool checking(Node* &head){
    for(Node* i = head ; i != NULL ; i = i->next){
        for(Node* j = i->next ; j != NULL ; j = j->next){
            if(i->value == j->value){
                return true;
            }

        }

    }
    return false;

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

  cout << (checking(head) ? "YES" : "NO") << endl;

 }