#include <iostream>
using namespace std ;

int max(int arr[]){
    int maximum = arr[0] ;
    for(int i=1 ;i<4;i++){
        if(arr[i]> maximum){
            maximum = arr[i] ;
        }
    }
    return maximum ;
}

int min(int arr[]){
    int minimum = arr[0] ;
    for(int i=1 ;i<4;i++){
        if(arr[i]< minimum){
            minimum = arr[i] ;
        }
    }
    return minimum ;
}

int main(){
    int arr[4] = {1,2,3,4} ;
    cout<<"min "<<min(arr);
    cout<<"max "<<max(arr) ;
}