#include <iostream>
using namespace std ;

int main(){
    int a[100][100] ;
    int m,n ;
    cin>>m >>n ;

    for(int i=0 ; i< m ;i++){
        for(int j=0 ;j<n ; j++){
            cin>>a[i][j] ;
        }
    }

    //print row wise
    for(int i=0 ; i< m ;i++){
        for(int j=0 ;j<n ; j++){
            cout<<a[i][j]<<" " ;
        }
        cout<<endl ;
    }

    //print column wise
    for(int j=0 ; j<n ;j++){
        for(int i=0 ; i<m ; i++){
            cout<<a[i][j]<<" " ;
        }
        cout<<endl ;
    }

}