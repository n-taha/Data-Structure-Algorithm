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

 int find_max(Node* &head){
    if(head == NULL){
        return INT_MIN;
    }
    int maxnum = INT_MIN;
     for(Node* temp = head ; temp != NULL ; temp = temp->next){
        if(temp->value > maxnum){
            maxnum = temp->value;
        }
     }
     return maxnum;
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

    int maxnumber = find_max(head);
    cout << maxnumber;

  return 0;

 }