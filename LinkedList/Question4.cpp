#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void addtolistatLast(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void printLL(Node* head){
    if(!head){
        return;
    }
    Node*temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

bool findLoop(Node* head){
    if(!head){
        return false;
    }
    Node*slow = head;
    Node*fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}
int main(){

    addtolistatLast(head,tail,1);
    addtolistatLast(head,tail,2);
    addtolistatLast(head,tail,3);
    addtolistatLast(head,tail,4);
    addtolistatLast(head,tail,5);
    addtolistatLast(head,tail,6);

    cout<<findLoop(head)<<endl;
    return 0;
}