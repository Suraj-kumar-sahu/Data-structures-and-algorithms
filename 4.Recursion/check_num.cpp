#include <iostream>
using namespace std;

bool check(int arr[],int size ,int x ){
    if(size ==0){
        return false ;
    }
    if(arr[0] == x){
        return true ;
    }else{
        check(arr+1 ,size-1 ,x) ;
    }
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n] ;
    for(int i=0 ; i<n ;i++){
        cin>>arr[i] ;
    }
    int x ;
    cin>>x ;

    if(check(arr,n,x)){
        cout<<"true" ;
    }else{
        cout<<"false" ;
    }

}