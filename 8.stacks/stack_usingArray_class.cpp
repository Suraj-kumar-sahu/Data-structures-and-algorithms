#include <iostream>
#include <climits>
using namespace std ;

class Stack{
    int *data ;
    int nextIndex;
    int capacity ;

    public:
    Stack(){
        data =new int[4] ;
        nextIndex=0;
        capacity=4 ;
    }

    int size(){
        return nextIndex ;
    }

    bool isEmpty(){
        return nextIndex==0 ;
    }

    void push(int element){
        if(nextIndex == capacity){
            //dyanmic stack
            int *newData = new int[2*capacity];
            for(int i=0 ;i<capacity;i++){
                newData[i] = data[i] ;
            }
            delete [] data ;
            capacity = capacity*2 ;
            data = newData ;
            // cout<<"stack is full "<<endl;
            // return ;
        }
        data[nextIndex] = element ;
        nextIndex++ ;
    }

    int pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl ;
            return INT_MIN ;
        }
        nextIndex-- ;
        return data[nextIndex] ;
    }

    int top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl ;
            return INT_MIN ;
        }
        return data[nextIndex-1] ;
    }
};

