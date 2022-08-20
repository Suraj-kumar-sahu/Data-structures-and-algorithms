#include <iostream>
using namespace std ;

int multiplication(int m , int n){
    if(m ==0 || n ==0){
        return 0 ;
    }
    int small_ans = multiplication(m,n-1);
    return m+ small_ans ;
}

int main(){
    int m,n ;
    cin>> m>>n ;
    cout<< multiplication(m,n);
}