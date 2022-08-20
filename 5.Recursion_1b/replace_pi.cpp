#include <iostream>
#include <cstring>
using namespace std ;

int length(char input[]){
    int len=0 ;
    for(int i=0 ;input[i]!='\0';i++){
        len++ ;
    }
    return len ;
}

char replacePi(char input[],int start){
    if(input[start]=='\0' || input[start+1]=='\0'){
        return 0;
    }
    replacePi(input,start+1) ;
    if(input[start]=='p' && input[start+1]=='i'){
        int len = length(input) ;
        input[len+2] ='\0' ;
        for(int i =len-1 ;i>=start+2 ;i--){
            input[len+2] =input[i] ;
        }
        input[start] ='3' ;
        input[start+1] ='.' ;
        input[start+2] ='1' ;
        input[start+3] ='4' ;
    }else{
        return input[start] ;
    }

}

void replacePi(char input[]){
    replacePi(input,0) ;
}

int main(){
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}