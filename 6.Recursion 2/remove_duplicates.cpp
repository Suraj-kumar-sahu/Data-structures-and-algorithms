#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void removeConsecutiveDuplicates(char s[],int start){
    if(s[start]=='\0'){
        return ;
    }
    removeConsecutiveDuplicates(s,start+1);
    if(s[start]==s[start+1]){
        //left shift by 1 pos
        for(int i=start+1 ;i<=strlen(s);i++){
            s[i-1]=s[i] ;
        }
    }
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s,0);
    cout << s << endl;
}