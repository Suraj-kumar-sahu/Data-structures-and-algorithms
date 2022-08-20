#include <iostream>
using namespace std;

void towerOfHanoi(int n ,char source,char auxilliary,char destination){
    if(n==0){
        return ;
    }
    towerOfHanoi(n-1,source,destination,auxilliary) ;
    cout<<source<<" "<<destination <<endl;
    towerOfHanoi(n-1,auxilliary,source,destination) ;
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
