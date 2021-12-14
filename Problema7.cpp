#include <iostream>
using namespace std; 

int num; 
int i; 
int j = 1; 
int acum; 



int main(){
cout<<"ingrese un numero: ";
cin>>num;

 while(num>j && num>i){
    i+=j;
    j+=i;
    if(j%2 == 0 ){
        acum+=j;
        }
    else if(i%2 == 0){
        acum+=i;
        }
    }
if(i%2==0 && i>=num){
    acum-=i;
     }
if(j%2==0 && j>=num){
    acum-=j;
    }
cout<<"El resultado de la suma es: "<<acum<<endl;


}