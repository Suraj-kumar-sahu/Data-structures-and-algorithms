#include <iostream>
using namespace std ;

int subsequence(string input,string output[]){
    if(input.empty()){
        output[0]="" ;
        return 1 ;
    }
    string substring = input.substr(1) ;
    int small_output_size = subsequence(substring,output) ;
    for(int i=0;i<small_output_size;i++){
        output[small_output_size +i] = input[0] +output[i] ;
    }
    return 2*small_output_size ;
}

int main(){
    string input ;
    cin>>input ;
    string *output = new string[1000] ;
    int output_size = subsequence(input,output);
    for(int i=0;i<output_size ;i++){
        cout<<output[i]<<endl ;
    }
}