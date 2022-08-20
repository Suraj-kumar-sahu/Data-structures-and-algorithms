#include <iostream>
using namespace std ;

void bubble_sort(int arr[] , int n){
    for(int j=0 ; j<n-1 ; j++)
    {    for(int i=0 ;i<n-1-j ; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]) ;
            }
        }
        }
}

int main(){
    int n;
    cin>>n ;
    int arr[100] ;
    for(int i=0 ;i<n;i++){
        cin>>arr[i] ;
    }

    bubble_sort(arr,n) ;
    for(int i =0 ; i<n ;i++){
        cout<<arr[i]<<" " ;
    }
}

//compare each element with it's adjacent one , if the next one is small then swap both of them 

//with each round , biggest element is placed at it's right place 