#include <iostream>
using namespace std ;

void replaceCharacter(char input[],char c1,char c2,int start){
    if(input[start]=='\0'){
        return ;
    }
    if(input[start] ==c1){
        input[start] = c2 ;
    }
    replaceCharacter(input,c1,c2,start+1) ;
}

int main(){
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2,0);
    cout << input << endl;
}