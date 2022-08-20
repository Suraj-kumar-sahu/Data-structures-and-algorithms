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

    int getSize(){
        return size ;
    }
    bool isEmpty(){
        return getSize()==0 ;
    }

    int push(int element){
        Node *newNode = new Node(element);
            newNode->next =head ;
            head=newNode ;
            size++ ;
        
    }
    int pop(){
        if(isEmpty()){
            return -1 ;
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
            return -1 ;
        }
        return head->data ;
    }
};


int main(){
    Stack s ;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<s.getSize()<<endl ;
    cout<<s.top()<<endl ;
    cout<<s.pop()<<endl ;
    cout<<s.getSize()<<endl ;
    cout<<s.top()<<endl ;






}