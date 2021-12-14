#include <iostream>
using namespace std;  

int aux=1; 
int count; 
int i; 
int j; 
int prime; 
int num;

int main(){

cout << "ingrese un numero: ";
cin>>num;
 while(count<num){

    for( i=1;i<=aux;i++){
        if (aux%i==0){
            j+=1;
            }
        }

    if (j==2){
        count++;
        prime=aux;
        cout<<prime<<endl;


    }
    aux++;
    j=0;
}
cout<<"EL primo numero "<<count<<" es: "<<prime<<" ";




}