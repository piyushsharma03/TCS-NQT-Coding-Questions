#include<iostream>
using namespace std;


int main(){
    
    int insert[3][3],oxy[10];
    int sum = 0,c = 0 ;

    for( int i = 0; i < 3 ; i++){
            for(int j= 0 ;  j < 3 ; j++){
                scanf("%d",&insert[i][j]);
        }
    }

    for( int i = 0; i < 3 ; i++){
            for(int j = 0 ;  j < 3 ; j++){
               sum = sum + insert[j][i];
        }
        sum = sum / 3;
        oxy[c] = sum ; 
        c++;
        if( sum < 70 ){
            printf("player %d is unfit", c);
        }
        sum = 0;
    }
    
    return 0;
}