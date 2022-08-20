#include <iostream>
using namespace std ;

int reverse(int arr[],int size){
    int i =0 ;
    int j= size-1 ;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++ ;
        j--;
    }
}

int main(){
    int arr[4] ={1,2,3,4} ;
    reverse(arr,4) ;
    for(int i=0 ;i<4 ;i++){
        cout<<arr[i] ;
    }
}