#include <iostream>
#include <cmath>
using namespace std ;

double sum(int k){
    if(k==0){
        return 1 ;
    }
    double small_ans = sum(k-1);
    return small_ans + 1/pow(2,k) ;
}

int main(){
    int k ;
    cin >>k;
    cout<<sum(k);
}