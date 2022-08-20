#include <iostream>
using namespace std ;

int main(){
    int arr[3] ;
    for(int i=0 ;i<3;i++){
        cin>>arr[i] ;
    }

    //sum
    int sum =0 ;
    for(int i=0 ;i<3;i++){
       sum = sum+ arr[i] ;
    }
    cout<<sum ;
}