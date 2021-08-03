#include<iostream>
using namespace std;


int main(){

    int interiorwall = 0 , extwall = 0;
    int i = 0;
    float  sum1 = 0, sum2 = 0;
    float estimated_cost  = 0;

    cin>>interiorwall;
    cin>>extwall;

    float surface_area[interiorwall];
    float sur_ext[extwall];


    if( interiorwall != 0){

     while( i < interiorwall ){
      cin>>surface_area[i];
      i++;
     }
    
    i = 0;
    while( i < interiorwall ){
      sum1 = sum1 + surface_area[i];
      i++;
    }
 }

    i = 0;
    if( extwall != 0){
     while( i < extwall ){
      cin>>sur_ext[i];
      i++;
     }
    i = 0;  
    while( i < extwall ){
      sum2 = sum2 + sur_ext[i];
      i++;
     }
    }

    // Doing sum from here ---------------------------------
    estimated_cost = ( sum1 * 18 ) + ( sum2 * 12 );
    cout<<"Estimated Cost : "<< estimated_cost <<" INR "<<endl;

    return 0;
}