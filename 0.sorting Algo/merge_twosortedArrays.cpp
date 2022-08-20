#include <iostream>
using namespace std ;

int merge(int arr1[] ,int m,int arr2[],int n,int arr3[]){
    int i=0,j=0,k=0 ;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]= arr1[i];
            i++ ;
            k++ ;
        }
        else{
            arr3[k] = arr2[j];
            j++ ;
            k++ ;
        }
    }
    while(i<m){
        arr3[k] =arr1[i] ;
        i++ ;
        k++ ;
    }
    while(j<n){
        arr3[k] =arr2[j] ;
        j++ ;
        k++ ;
    }
}

int print(int arr3[],int k){
    for(int i = 0 ; i<k ; i++){
        cout<<arr3[i]<<" ,";
    }
}

int main(){
    int arr1[3] ={1,2,3};
    int arr2[5]= {5,7,9,12,13} ;
    int arr3[8]={0} ;

    merge(arr1,3,arr2,5,arr3);
    print(arr3,8) ;
}