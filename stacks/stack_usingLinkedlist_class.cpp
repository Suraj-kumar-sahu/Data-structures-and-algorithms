#include <iostream>
#include <climits>
using namespace std ;

class Node{
    public:
    int data ;
    Node *next ;

    Node(int data){
        this->data =data ;
        next =NULL ;
    }
};

class Stack{
    Node *head ;
    int size;

    public:
    Stack(){
        head =NULL ;
        size =0 ;
    }

    int getsize(){
        return size ;
    }
    bool isEmpty(){
        return getsize()==0 ;
    }

    int push(int element){
        Node *newNode = new Node(element);
        
            newNode->next =head ;
            newNode=head ;
            size ++ ;
        
    }
    int pop(){
        if(isEmpty()){
            return 0 ;
        }
        int ans = head -> data ;
        Node *temp = head ;
        head = head -> next ;
        delete temp ;
        size-- ;
        return ans ;
    }
    int top(){
        if(isEmpty()){
            return 0 ;
        }
        return head->data ;
    }
};