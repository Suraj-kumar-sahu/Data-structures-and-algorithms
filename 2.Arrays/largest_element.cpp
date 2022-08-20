#include <iostream>
#include <climits>
using namespace std ;

int largest(int *arr,int size){
    int largest_no =INT_MIN ;
    for(int i=0 ;i<size;i++){
        if(arr[i]>largest_no){
            largest_no = arr[i] ;
        }
    }
    return largest_no ;
}

int main(){
    int arr[5] ;
    for(int i=0 ;i<5;i++){
        cin>>arr[i] ;
    }
    cout<<largest(arr,5);
}