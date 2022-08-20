#include <iostream>
#include <climits>
using namespace std ;

int kth_min(int arr[],int i){
    int minimum = INT_MAX ;
    int *arr1 = new int[4];
    int index =0 ;
    for(int i=0 ;i<4;i++){
        if(arr[i]< minimum){
            minimum = arr[i] ;
            arr1[index]=minimum ;
            index++ ;
        }
    }
    return arr1[i] ;
}

int main(){
    int arr[4] = {1,2,3,4} ;
    int i;
    cin>>i ;
    cout<<"kth_min "<<kth_min(arr,i);
}