#include <iostream>
#include <cstring>
using namespace std ;

void removeX(char input[],int start){
    if(input[start]=='\0'){
        return ;
    }
    removeX(input,start+1);
    if(input[start]=='x'){
        for(int i=start+1 ; i<=strlen(input);i++){
            input[i-1] = input[i] ;
        }
    }else{
        return ;
    }
}

int main(){
    char input[100];
    cin.getline(input, 100);
    removeX(input,0);
    cout << input << endl;
}