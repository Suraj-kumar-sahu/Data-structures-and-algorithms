#include <iostream>
#include <stack>
using namespace std;
//iterative way

/*
void helper(stack<int> &input, stack<int> &extra,stack<int> &extra2){
    while(input.size() != 0){
        extra.push(input.top());
        input.pop() ;
    }
    while(extra.size() !=0){
        extra2.push(extra.top());
        extra2.pop() ;
    }
    while(extra2.size() !=0){
        input.push(extra2.top());
        extra2.pop() ;
}
    
}

void reverseStack(stack<int> &input, stack<int> &extra) {
    
    stack<int> extra2 ;
    helper(input,extra,extra2) ;
}
*/

// recursive method
void reverseStack(stack<int> &input, stack<int> &extra) {
    if(input.size()==0 || input.size()==1){
        return ;
}
     int temp = input.top() ;
     input.pop();
    
    reverseStack(input,extra);
    while(input.size() != 0){
        extra.push(input.top());
        input.pop() ;
    }
    input.push(temp) ;
    while(extra.size() !=0){
        input.push(extra.top());
        extra.pop() ;
}
    
}


int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }

    
}