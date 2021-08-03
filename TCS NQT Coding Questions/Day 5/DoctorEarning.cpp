
#include<iostream>
using namespace std;

int main(){

    int arr[20],i=0,m[20];
    char c;

    while( i < 7 ){
        
        cin>>m[i];
        c = m[i];
        
        if ( c == 10 ){
            break;
        }
        else if ( m[i] <= 0 || m[i] > 120 ){
            cout<<"INVALID INPUT";
            return 0;
        }
        arr[i] = m[i];
        i++;
    }

    int j = 0;
    int sum = 0;
    while( j < i){       
        if( arr[j] < 17) {
            sum = sum + 200 ;
        }else if(arr[j] >= 17 && arr[j] <= 40 ){
            sum = sum + 400 ;
        }else if(arr[j] > 40){
            sum = sum + 300 ;
        }
    j++;
    }

    cout<<"Total earning of the day is : "<<sum<<" INR"<<endl;

    return 0;
}