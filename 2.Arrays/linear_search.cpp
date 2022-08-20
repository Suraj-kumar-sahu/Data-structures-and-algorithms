#include <iostream>
using namespace std ;

int index(int arr[] ,int x){
    int ans = 0 ;
    for(int i=0 ; i<5 ; i++){
        if(arr[i] == x){
            ans = i ;
        }else{
            ans = -1 ;
        }
    }
    return ans ;
}

int main(){
    int arr[5] ;
    for(int i=0 ;i<5;i++){
        cin>>arr[i] ;
    }

    int x ;
    cin>>x;
    //search
    cout<<index(arr , x) ;
}