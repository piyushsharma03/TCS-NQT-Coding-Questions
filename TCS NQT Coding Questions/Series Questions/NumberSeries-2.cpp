#include<iostream>
using namespace std;

int main(){

    int n , e = 1 , o = 1;
    cin>>n;

    for( int i = 1  ; i <= n ; i++){

        if(n==1 || n==2){
            cout<<1;
            break;
        }
        
        if( i % 2 == 0){
            e = e * 2;
            if( i == n) cout<<e;
        } else{
            o = o * 3;
            if( i == n) cout<<e;
        }
    }

    return 0;
}