#include <iostream>
using namespace std ;

int sum(int n ){
    if(n<=9){
        if(n==0){
            return 0 ;
        }else{
            return n ;
        }
    }
    int digit = n %10 ;
    int small_ans =sum(n/10) ;
    return digit + small_ans ;
}

int main(){
    int n ;
    cin>>n ;
    cout<<sum(n);
}