#include <iostream>
using namespace std; 

float e=1.0; 
float fact= 1.0; 
int num; 
int i; 
int j;

int main(){

 cout<<"ingrese el numero de elementos para la aproximacion de e: ";
 cin>>num;

for (j=1;j<num;j++){
    for(i=1;i<=j;i++){
        fact*=i;
    }
    e=e+1/fact;
    fact=1.0;
                }
    cout<<"e es aproximadamente: "<<e;

}