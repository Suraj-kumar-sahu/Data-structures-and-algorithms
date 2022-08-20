#include <iostream>
using namespace std ;

int binary_search(int arr[] , int size , int x){
    int start =0 ;
    int end = size-1 ;
    while(start <= end ){
        int mid = (start+end)/2 ;
        if(x == arr[mid]){
            return mid ;
        }
        else if(x < arr[mid]){
            end = mid-1 ;
        }
        else{
            start = mid +1 ;
        }
    }
    return -1 ;
}

int main(){
    int n;
    cin>>n ;
    int arr[100] ;
    for(int i=0 ;i<n;i++){
        cin>>arr[i] ;
    }

    int x ;
    cin>>x;
    //binary search
    cout<<binary_search(arr,n, x) ;
}

//find mid element . compare x with mid element ,if it is same then return mid index .if x < mid element ,then do comparison on the left half of mid element else right half .