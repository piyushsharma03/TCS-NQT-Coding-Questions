#include<iostream>
using namespace std;


int main(){

    int i = 0,e = 0,o = 0;
    int n = 0;
    cout<<"Enter the position : ";
    cin>>n;

    if( n == 1 || n == 2 ){
        cout<<0;
        return 0;
    }
    
    for( int k = 0 ; k < n-1 ; k++){
        
        if( k == 0) {
            continue;
        } 
        if( k % 2 == 1){
            o = o+7;
            if( k == n-2 ){
            cout<<o;
            }
        }else{
            e = e+6;
            if( k == n-2 ){
            cout<<e;
            }
        }

    }
    
    return 0;
}