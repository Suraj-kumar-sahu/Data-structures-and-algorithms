#include <iostream>
#include <cstring>
using namespace std;

int helper(char input[],int start , int end){
    if(input[0] =='\0' || input[1] =='\0'){
        return 1 ;
    }
    if(start>=end){
        return 1 ;
    }
    if(input[start]==input[end]){ 
        return helper(input,start+1 ,end-1) ;
    }else{
        return 0 ;
    }
}

int checkPalindrome(char input[]){
    int start =0 ;
    int end = strlen(input)-1 ;
    helper(input,start,end) ;
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
