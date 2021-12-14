#include <iostream>
using namespace std;  
int n;
int i; 
int j; 
int aux;
int MCM; 
int main(){

cout<<"ingrese un numero: "; 
cin>>n;
i=n;
j=n-1;
aux=1;
MCM=n*j;
while(aux==1){
    for (i=n;i>=1;i--){
         if(MCM%i!=0){
            MCM=n*(n+j);
            j++;
            break;
        }
        if(i==1){
            cout<<"El minimo comun multiplo es: "<<MCM;
            aux=0;
        }
    }
}




}