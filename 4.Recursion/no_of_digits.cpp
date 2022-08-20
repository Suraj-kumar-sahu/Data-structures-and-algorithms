#include <iostream>
using namespace std ;

int digits(int n){
    if(n==0){
        return 0 ;
    }
    int small_output = digits(n/10);
    return 1 + small_output ;
}

int main(){
    int n ;
    cin>>n ;
    cout<<digits(n);
}