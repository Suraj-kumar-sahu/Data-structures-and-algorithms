#include <iostream>
using namespace std ;

int power(int x ,int n ){
    if(n==1){
        return x ;
    }
    int small_output = power(x,n-1);
    return x*small_output ;
}

int main(){
    int x,n ;
    cin>>x>>n ;

    cout<<power(x,n) ;
}