#include <iostream>
using namespace std;  
int i; 
int n; 
int num; 
int k; 
int j; 

int main(){

cout<<"ingrese un numero: "; 
cin>>num;
    n=(num/2)+1;
    k=0;
    for(int i=n;i>0;i--){
        for(j=1;j<=n;j++){
                if(i%j==0){
                    k++;
                        }
                    }
                    if(k==2){
                        if(num%i==0){
                            cout<<"el mayor factor primo es: "<<i;
                            break;
                        }
                    }

    k=0;
    }



}