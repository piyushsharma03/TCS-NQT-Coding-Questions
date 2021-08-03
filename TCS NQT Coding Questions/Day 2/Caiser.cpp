#include<iostream>
using namespace std;
    
int main() 
{    
    char text[] = "All1 the 9 best";
    int key = 1 , i = 0 , ascii = 0;
    char c ;

    while( text[i] != '\0') {
     
        ascii = text[i];
        if( ascii ==  32)
        {
            i++;
            continue;
        };

    if(ascii >= 97 && ascii < 122)
        {
        ascii = ascii + key;
        c = ascii ;
        text[i] = c ; 
        }
        else if( ascii == 122 ){
        ascii = 97 + key - 1;
        c = ascii;
        text[i] = c ; 
    }

    if(ascii >= 65 && ascii < 90)
        {
        ascii = ascii + key;
        c = ascii ;
        text[i] = c ; 
        }
        else if( ascii == 90 ){
        ascii = 65 + key - 1;
        c = ascii;
        text[i] = c ; 
        }

    if(ascii >= 48 && ascii < 57)
        {
        ascii = ascii + key;
        text[i] = ascii; 
        }
        else if( ascii == 57 ){
        ascii = 48 + key - 1;
        text[i] = ascii; 
        }
    
    i++;
    }   
    cout<<text;
    return 0;
}