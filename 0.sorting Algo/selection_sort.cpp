#include <iostream>
using namespace std ;

int selection_sort(int arr[],int n){
    for(int i=0 ; i<n-1 ; i++){
        int minIndex = i ;
        //finding minimum index
        for(int j = i+1; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j ;
            }
        }
        //swapping ith element with minimum element
        swap(arr[i],arr[minIndex]);
    }
    
}


int main(){
    int n;
    cin>>n ;
    int arr[100] ;
    for(int i=0 ;i<n;i++){
        cin>>arr[i] ;
    }

    selection_sort(arr,n) ;
    for(int i =0 ; i<n ;i++){
        cout<<arr[i]<<" " ;
    }
}

//find min index where minimum element is there .then swap that element with the 1st element of the array .and so on for the next round.

//after 1 round smallest element will be place at it;s right position