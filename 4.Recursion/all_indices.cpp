#include <iostream>
using namespace std ;

int index(int arr[],int size ,int x,int output[] ){
    if(size ==0){
        return 0 ;
    }

    int ans = index(arr,size-1,x,output);
    if(arr[size-1] ==x){
        output[ans++] = size -1 ;
    }
    return ans ;
    
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
    int* output = new int[n] ;
    int size =index(arr,n,x,output);
    for(int i=0 ; i<size ;i++){
        cout<<output[i] <<" ";
    }
}