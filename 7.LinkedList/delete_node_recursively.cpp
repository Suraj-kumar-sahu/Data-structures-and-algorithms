#include <iostream>
#include "nodeclass.cpp"
using namespace std ;

Node *deleteNode(Node *head,int pos){
    if(head ==NULL){
        return NULL ;
    }
    if(pos==0){
        head = head ->next ;
    }else{
        head -> next = deleteNode(head->next,pos-1) ;
    }
    return head ;

}

Node *takeInput(){
    int data ;
    cin>>data ;
    Node *head =NULL ;
    Node *tail= NULL ;
    while(data !=-1){
        Node *newNode=new Node(data);
        if(head == NULL){
            head =newNode ;
            tail= newNode ;
        }else{
            tail->next =newNode ;
            tail= newNode ;
        }
        cin>>data ;
    }
    return head ;
}

void print(Node *head){
    Node *temp = head ;
    while(temp !=NULL){
        cout<<temp->data<<" " ;
        temp =temp->next ;
    }
}

int main(){
    cout<<"give input "<<endl ;
    Node *head =takeInput();
    
    int pos ;
    cout<<"enter pos "<<endl ;
    cin>>pos ;
    head = deleteNode(head,pos);
    cout<<"linked list is " ;
    cout<<endl ;
    print(head);

}