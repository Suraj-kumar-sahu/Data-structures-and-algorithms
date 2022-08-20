#include <iostream>
using namespace std ;

int index(int arr[],int size ,int x ){
    
    if(size ==0){
        return -1 ;
    }
    int ans = index(arr+1,size-1,x) ;
    if(ans != -1){
        return ans+1 ;
    }
    if(arr[0]==x){
        return 0 ;
    
    }else{
        return -1 ;
    }

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