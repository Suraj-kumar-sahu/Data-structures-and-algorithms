#include <iostream>
//#include "stack_usingLinkedlist_class.cpp"
#include <stack>
using namespace std ;

int main(){
    stack<int> s ;
    s.push(10) ;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size();
    cout<<s.top()<<endl;
    //s.pop()<<endl;
    
}