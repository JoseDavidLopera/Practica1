#include <iostream>
using namespace std;   
int count; 
int sum; 
int num; 
int prime; 
int i; 

int main(){

cout<<"ingrese un numero: ";
cin>>num;
for(prime=2;prime<=num;prime =prime+1){
    for(i=1;i<=prime;i++){
        if(prime%i==0){
            count++;
        }
    }
        if(count<3){
            sum+=prime;
            cout<<prime<<endl;
        }
        count=0;

}
cout<<"El resultado de la suma es: "<<sum;


}