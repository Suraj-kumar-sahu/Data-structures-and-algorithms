#include <iostream>
using namespace std ;

int index(int arr[],int size ,int x ){
    
    if(size ==0){
        return -1 ;
    }
    static int i= 0 ;
    if(arr[0]==x ){
        return i ;
    }else{
        i++ ;
        index(arr+1,size-1,x) ;
    }


    //alternative
    // int ans = index(arr+1,size-1,x) ;
    // if(ans == -1){
    //     return -1 ;
    // }else{
    //     return ans +1 ;
    // }

}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n] ;
    for(int i=0 ; i<n ;i++){
        cin>>arr[i] ;
    }
    int x ;
    cin>>x ;
    cout<<index(arr,n,x);
}