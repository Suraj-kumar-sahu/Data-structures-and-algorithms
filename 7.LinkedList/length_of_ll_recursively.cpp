#include <iostream>
#include "nodeclass.cpp" 
using namespace std ;

int length(Node *head){
    Node *temp = head ;
    if(temp->next == NULL){
        return 1 ;
    }
    int small_ans = length(temp->next);
    return 1 + small_ans ;
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
    Node *head =takeInput();
    cout<<"linked list is " ;
    print(head);
    cout<<endl ;
    cout<<"length "<<length(head) ;

}