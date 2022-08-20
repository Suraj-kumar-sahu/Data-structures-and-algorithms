#include <iostream>
using namespace std ;

void merge(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid = (end+start)/2 ;
    int size = end+1 ;

    //making 2 new array
    int size1 = mid-start+1 ;
    int size2 = end-mid ;

    int *arr1 = new int[size1];
    int *arr2 = new int[size2];

    int main_array_index=start ;
    for(int i=0;i<size1;i++){
        arr1[i]=arr[main_array_index++] ;
    }
    main_array_index=mid +1 ;
    for(int i=0;i<size2;i++){
        arr2[i]=arr[main_array_index++] ;
    }

    int i=0,j=0,k =0 ;
    int *arr3 = new int[size] ;
    main_array_index=start ;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr3[main_array_index++]=arr1[i];
            i++;
        }else{
            arr3[main_array_index++]=arr2[j];
            j++;
        }
    }
    while(i<size1){
        arr3[main_array_index++] =arr1[i] ;
        i++ ;
    }
    while(j<size2){
        arr3[main_array_index++] =arr2[j] ;
        j++ ;
    }
    
    
}

void helper(int input[],int size,int start,int end){
    if(start>=end){
        return ;
    }
    int mid = (end+start)/2 ;
    helper(input , size ,start,mid) ;
    helper(input,size,mid+1,end) ;

    merge(input,start,end);
}

int merge_sort(int arr[],int size){
    int start=0;
    int end= size-1 ;
    
    helper(arr,size,start,end);
}

int main(){
    int size;
    cin>>size;
    int *arr =new int[size] ;
    for(int i=0;i<size;i++){
        cin>>arr[i] ;
    }
    cout<<endl;
    merge_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
}