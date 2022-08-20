#include <iostream>
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

class Queue{
    Node *head ;
    Node *tail ;
    int size;

    public:
    Queue(){
        head=NULL;
        tail=NULL;
        size =0 ;
    }

    int getSize(){
        return size ;
    }

    bool isEmpty(){
        return getSize()==0 ;
    }

    void enqueue(int element){
        Node *newNode = new Node(element);
        if(head==NULL){
            head =newNode ;
            tail=newNode ;
        }
        if(head !=NULL){
            tail->next =newNode ;
            tail =newNode ;
        }
        size++ ;

    }

    int dequeue(){
        if(isEmpty()){
            cout<<"queue is empty" ;
            return 0 ;
        }
        int ans = head->data ;
        Node *temp =head ;
        head = head->next ;
        delete temp ;
        size-- ;
        return ans ;
    }

    int front(){
        if(isEmpty()){
            cout<<"queue is empty" ;
            return 0 ;
        }
        return head->data ;
    }
};

int main(){
    Queue q ;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.getSize()<<endl ;
    cout<<q.front()<<endl ;
    cout<<q.dequeue()<<endl ;
    cout<<q.dequeue()<<endl ;
    cout<<q.dequeue()<<endl ;
    cout<<q.getSize()<<endl ;
    cout<<q.front()<<endl ;
}