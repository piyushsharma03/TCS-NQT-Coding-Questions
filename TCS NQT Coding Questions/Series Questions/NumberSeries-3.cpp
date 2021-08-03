#include<iostream>
using namespace std;

int main(){

    int n ,e = 0,o = 0;

    cin>>n;

    if( n == 1 || n == 2  ){
            cout<<0;
            return 0;
    }
    else if( n == 3){
            cout<<2;
            return 0;
    }

    e = 2;

    if( n % 2 == 1 ){
    for(int i = 3 ; i <= n ; i++){
        if(i % 2 == 1){
            o = o + 2;
            if( n == i) cout<<"this is" <<n <<"th term : "<<o; 
        }
        }
    }
    else{
    for(int i = 3 ; i < n ; i+=2){
        o = o + 2;
        if( (n-1) == i) cout<<"this is" <<n <<"th term : "<<o/2;     
    }
    }


    return 0;
}