#include <iostream>
using namespace std ;


int partition(int arr[],int start,int end){
    int num = arr[start] ;
    int count=0 ;
    for(int i=start+1 ; i<=end ;i++){
        if(arr[i]<=num){
            count =count+ 1 ;
        }
    }
    int c = start + count ;
    swap(arr[start],arr[c]);
    int i=start ;
    int j=end ;
    while(i <= c && j >= c){
        if(arr[i]<= num){
            i++ ;
        }else if(arr[j] > num){
            j-- ;
        }else{
            swap(arr[i++],arr[j--]) ;
        }
    }
    return c ;
}


void helper(int arr[],int start,int end){
    if (start >= end)
    {
        return;
    }
    int c =partition(arr,start,end);
    helper(arr,start,c-1);
    helper(arr,c+1,end) ;

}

void quick_sort(int arr[],int size){
    
    helper(arr,0,size-1);
}

int main(){
    int size;
    cin>>size;
    int *arr =new int[size] ;
    for(int i=0;i<size;i++){
        cin>>arr[i] ;
    }

    quick_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
    delete [] arr;
}