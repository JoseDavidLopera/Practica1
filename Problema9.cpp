#include <iostream>
using namespace std;  

int sum; 
int i = 1; 
int num; 
int module; 
int count; 

int main(){

cout<<"ingrese un numero: "<<endl; 
cin>>num;
while(num > 10) {
    module=num%10;
    num/=10;

    if (module==0){
        sum+=1;
        }

    else{
        for(count=0;count<module;count++){    
            i*=module;
        }  
        sum +=i;
        i=1;
    }
}
i=1;
for(count=0;count<num;count++){              
    i*=num;
}
sum+=i;
cout<<"El resultado de la suma es: "<<sum;



}