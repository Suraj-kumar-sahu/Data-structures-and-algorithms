#include <iostream>
using namespace std ;

int sum(int arr[] , int size){
    if(size==0){
        return 0 ;
    }
    int small_output= sum(arr+1 ,size-1) ;
    return arr[0] + small_output ;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n] ;
    for(int i=0 ; i<n ;i++){
        cin>>arr[i] ;
    }
    cout<<sum(arr,n);
}