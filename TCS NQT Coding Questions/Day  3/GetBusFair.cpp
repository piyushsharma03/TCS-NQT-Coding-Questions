#include<bits/stdc++.h>
#include<cmath>
#include<iomanip>
using namespace std;


    void getFair(string so,string des){
        cout<<"source and destination matched"<<endl;
    }


int main(){

    string s[] = {"TH","GA","IC","HA","TE","LU","NI","CA"};
    int path[] = {800,600,750,900,1400,1200,1100,1500}; 
    double fare = 0 ;
    int f;

    string source = "";
    string destination = "";

    cout<<"Enter Source : "<<endl;
    cin>>source;

    cout<<"Enter destination :"<<endl;
    cin>>destination;
    
    transform(source.begin(),source.end() , source.begin(),::toupper);
    transform(destination.begin(),destination.end() , destination.begin(),::toupper);
    
    int i = 0,count = 0,count1 = 0,j = 0;

    while( i < 10){
        if( source == s[i])
        {
            count = 1;
        }
        if(destination == s[i]){
            count1 = 2 ;
        } 
        i++;
    }
    
    count = count + count1;

    if(count == 3){
        
        for(int i = 0 ; i < 9 ; i++){
            
            if( source == s[i]){
             
             j = i ;

                while( s[j] != destination ){
                if( j == 7 || j == 8 ) j = 0 ;
                fare = fare + path[j+1]; 
                j++;
                }
            fare = fare + path[j];
            fare =  round( ( fare / 1000 ) * 5 );
            break;  
            }
        }
    cout<<"fare : " << fixed << setprecision(1) <<  fare  << " INR "<< endl;

    }   else{
        cout<<"INVALID INPUT"<<endl;
    }

    return 0 ;
}