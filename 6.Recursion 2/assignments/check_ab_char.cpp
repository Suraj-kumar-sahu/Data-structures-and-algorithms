#include <iostream>
#include <cstring>
using namespace std;

int checkAB(char input[]){
    if(input[0]=='\0'){
        return 1;
    }
    if(input[0]=='a'){
        int len_of_rest = strlen(input+1) ;
        if(len_of_rest >1 && input[1]=='b' && input[2] =='b'){
            return checkAB(input+3) ;
        }else{
            return checkAB(input+1);
        }
    }
    return 0 ;
}

int main() {
    char input[1000];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
