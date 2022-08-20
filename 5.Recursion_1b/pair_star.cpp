#include <iostream>
#include <cmath>
using namespace std;

int length(char input[]){
    int len=0 ;
    for(int i=0 ;input[i]!='\0';i++){
        len++ ;
    }
    return len ;
}

void pairStar(char inp[],int start){
    if(inp[start]=='\0'){
        return ;
    }
    pairStar(inp,start+1);
    if(inp[start]==inp[start+1]){
        for(int i=length(inp);i>=start+1;i--){
            inp[i+1] =inp[i] ;
        }
        inp[start] = inp[start+1] ;
        inp[start+1] = '*' ;
    }
} 

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input,0);
   cout << input << endl;
}
