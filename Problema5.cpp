#include <iostream>
using namespace std; 

int num; 
int columna; 
int fila; 
int i= 1;
int main(){

cout<<"ingrese un numero entero impar: "; 
cin>>num;


for (fila=0;fila>=0;fila=fila+i){
    if (fila==num/2){
        i=-1;
    }
    for (columna=0;columna<num;columna++){

        if(columna>=((num/2)-fila) && columna<(num-((num/2)-fila))){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}



}