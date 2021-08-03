#include<iostream>
using namespace std;

int main(){

    int num,div=0;
    cin>>num;

    if( num < 0 ){ 
        cout<<"please enter a postitve number"<<endl;
        cin>>num;
    }

    for(int  i = 1 ; i <= num ; i++ ){
        
        if( num % i == 0){
            div++;
        }
    }

    if(div == 2 ){
        cout<<num<<" is a prime number"<<endl;
    }else{
        cout<<num<<" is not a prime number"<<endl;
    }
    
    return 0;
}