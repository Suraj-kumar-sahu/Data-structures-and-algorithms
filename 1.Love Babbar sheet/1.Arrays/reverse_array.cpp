#include <iostream>
using namespace std ;

int main(){
    int arr[4] = {1,2,3,4} ;
    int i =0 ;
    int j = 4 -1 ;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j-- ;
    }
    for(int i=0 ;i<4;i++){
        cout<<arr[i] ;
    }
}