#include <iostream>
using namespace std;

int checkAB(string input){
    if(input.empty()){
        return 1;
    }
    if(input[0]=='a'){
        int len_of_rest = input.substr(1).length() ;
        if(len_of_rest >1 && input[1]=='b' && input[2] =='b'){
            return checkAB(input.substr(3)) ;
        }else{
            return checkAB(input.substr(1));
        }
    }
    return 0 ;
}

int main() {
    string input;
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
