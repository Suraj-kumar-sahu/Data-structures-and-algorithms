#include <iostream>
#include "nodeclass.cpp"
using namespace std ;

Node *insertNode(Node *head,int pos,int data){
    if(head == NULL || pos==0){
        Node *newNode = new Node(data) ;
        newNode->next =head ;
        head =newNode ;
    }else{
        head->next =insertNode(head->next,pos-1,data) ;
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
    
    int pos,data ;
    cout<<"enter pos & data "<<endl ;
    cin>>pos>>data ;
    head = insertNode(head,pos,data);
    cout<<"linked list is " ;
    cout<<endl ;
    print(head);

}