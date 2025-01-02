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

void input_in_tail(Node* &head , Node* &tail){
   int value;
   while(true){
    cin >> value;
    if(value == -1){
        break;
    }

     Node* newnode = new Node(value);
      if(head == NULL){
        head = newnode;
        tail = newnode;
      }else{
        tail->next = newnode;
        tail = newnode;
      }

   }
}

int size_of_list(Node* &head){
   int size = 0;
   while(head != NULL){
    size++;
    head = head->next;
   }
   return size;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    input_in_tail(head1,tail1);
    input_in_tail(head2,tail2);

    int size1 = size_of_list(head1);
    int size2 = size_of_list(head2);

    if(size1 == size2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;

}