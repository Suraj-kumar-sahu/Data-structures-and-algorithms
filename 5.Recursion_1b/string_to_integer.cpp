#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int helper(char input[],int lastindex){
    
    if(lastindex == 0){
        return input[lastindex] - '0' ;
    }
    int a = helper(input , lastindex-1) ;
    int b = input[lastindex] - '0' ;
    return a*10 + b ;
}

int stringToNumber(char input[]){
    int length = strlen(input) ;
    helper(input,length-1);
    
}
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
