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

Node* rotateList(Node* &head, int p){
    if(!head || p==0){
            return head;
        }
        int length = 0;
        Node* t = head;
        while (t) {
            ++length;
            t = t->next;
        }

        // Step 2: Normalize p
        p = p % length;
        
        Node* temp = head;
        while(p!=1 && temp){
            temp = temp->next;
            p--;
        }
        //if k is equal to length of list
        if (!temp || !temp->next) return head;
        
        Node* newHead = temp->next;
        newHead->prev = NULL;
        temp->next = NULL;
        
        Node* temp2 = newHead;
        while(temp2->next!=NULL){
            temp2 = temp2->next;
        }
        
        
        temp2->next=head;
        head->prev = temp2;
        
        return newHead;

}
int main(){
    int data;
    cout<<"Enter the value for list and to stop type -1"<<endl;
    cin>>data;
    while(data != -1){
        addtolistatLast(head,tail,data);
        cin>>data;
    }
    int p;
    cout<<"Type the position to rotate"<<endl;
    cin>>p;

    cout<<"List before rotataing"<<endl;
    printLL(head);
    cout<<endl;
    cout<<"List after rotation"<<endl;
    Node* newhead = rotateList(head,p);
    printLL(newhead);
    return 0;
}