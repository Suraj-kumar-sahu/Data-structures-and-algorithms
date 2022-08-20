#include <iostream>
using namespace std ;

class Queue{
    int *data ;
    int nextIndex ;
    int firstIndex ;
    int size ;
    int capacity ;

    public:
    Queue(){
        data = new int[5];
        nextIndex = 0 ;
        firstIndex = -1 ;
        size = 0 ;
        capacity = 5 ;
    }

    int getSize(){
        return size ;
    }
    bool isEmpty(){
        return size ==0 ;
    }

    void enqueue(int element){
        if(size == capacity){
            //dynamic enqueue
            int *newData =new int(2* capacity) ;
            int j=0 ;
            for (int i=firstIndex ;i<capacity ;i++){
                newData[j] =data[i] ;
                j++ ;
            }

            for(int i=0 ;i<firstIndex;i++){
                newData[j] =data[i] ;
                j++ ;
            }
            delete [] data ;
            data =newData ;
            nextIndex =capacity ;
            capacity *=2 ;

            // cout<<"Queue is full" ;
            // return ;
        }
        data[nextIndex] = element ;
        nextIndex =(nextIndex+1) % capacity ;
        if(firstIndex==-1){
            firstIndex = 0 ;
        }
        size++ ;
    }

    int front(){
        if(isEmpty()){
            cout<<"Queue is empty" ;
            return 0 ;
        }
        return data[firstIndex] ;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty" ;
            return 0 ;
        }
        int ans = data[firstIndex];
        firstIndex = (firstIndex+1)% capacity ;
        size -- ;
        return ans ;
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