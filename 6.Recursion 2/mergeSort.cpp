#include <iostream>
using namespace std ;

void merge(int input[],int si,int ei){
    int midi =(si+ei)/2 ;

    //getting the lengths of the two arrays
    int len1 = midi-si+1 ;
    int len2 = ei-midi ;

    //creating the arrays of their respective size
    int *first = new int[len1] ;
    int *second = new int[len2] ;

    //copying the values to the array
    int mainarrayindex = si ;
    for(int i =0 ; i <len1 ; i++){
        first[i] = input[mainarrayindex++] ;
    }

    mainarrayindex = midi+1 ;
    for(int i =0 ; i<len2 ; i++){
        second[i] = input[mainarrayindex++];
    }
    //merging first and second array 
    int indexoffirst = 0 ;
    int indexofsecond =0 ;
    mainarrayindex = si ;
    while(indexoffirst < len1 && indexofsecond <len2){
        if(first[indexoffirst] < second[indexofsecond]){
            input[mainarrayindex++] = first[indexoffirst++] ;
        }else{
            input[mainarrayindex++] = second[indexofsecond++] ;
        }
    }
    while(indexoffirst < len1){
         input[mainarrayindex++] = first[indexoffirst++] ;
     }
    while(indexofsecond <len2){
        input[mainarrayindex++] = second[indexofsecond++] ;
    }
}
void helper(int input[],int size,int si,int ei){
    if(si>=ei){
        return ;
    }
    int midi = (si+ei)/2 ;
    helper(input , size ,si,midi) ;
    helper(input,size,midi+1,ei) ;

    merge(input,si,ei);
}

void mergeSort(int input[],int size){
    int si,ei ;
    helper(input,size,0,size-1);
}

int main(){
    int size;
    cin>>size;
    int *arr =new int[size] ;
    for(int i=0;i<size;i++){
        cin>>arr[i] ;
    }
    cout<<endl;
    mergeSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
}
