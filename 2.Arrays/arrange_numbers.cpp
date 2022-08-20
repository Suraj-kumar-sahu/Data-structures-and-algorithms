#include <iostream>
using namespace std ;

int arrange_no(int* arr , int size){
    int stop = (size-1)/2 ;
    int elements_odd = 1 ;
    for(int i=0 ; i<= stop ; i++){
        if(elements_odd % 2 ==1){
            arr[i] = elements_odd ;
            elements_odd = elements_odd +2 ;
        }
    }

    int elements_even = 2 ;
    for(int j=size-1 ; j>= stop+1 ; j--){
        if(elements_even % 2 ==0){
            arr[j] = elements_even ;
            elements_even = elements_even +2 ;
        }
    }
}

int main(){
    int n ;
    cin>>n ;
    int *arr = new int[n] ;
    arrange_no(arr,n) ;
    for(int i=0 ;i<n ; i++){
        cout<<arr[i]<<" " ;
    }
}