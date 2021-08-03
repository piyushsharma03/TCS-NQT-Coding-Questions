#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float  k , j , m , p;
    int n = 0;

    cin>>n;
    cin>>k;
    cin>>j;
    cin>>m;
    cin>>p;

    if( n < 0 || k < 0 || j < 0 || m < 0 || p < 0 ){
        cout<<"INVALID INPUT"; 
    }else{
        if( k > 0 ){
        m = m / k;
        } if( j > 0) {
        p = p / j;
        }
        n = n - m - p;
    }

    cout<<m<<p;
    cout<<"Number of Monkeys left on the tree:"<<  n  <<endl;

    return 0;
}