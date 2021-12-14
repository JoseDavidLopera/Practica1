#include <iostream>
using namespace std; 
int num; 
int res; 
int fiftyT;
int twenty; 
int ten; 
int five;
int two;
int thousand;
int fiveH; 
int twoH;
int hundred; 
int fifty; 


int main(){

cout <<"ingrese un valor: "; 
cin >> num; 

res=num%50000;
fiftyT=num/50000;
twenty=res/20000;
res=res%20000;
ten=res/10000;
res=res%10000;
five=res/5000;
res=res%5000;
two=res/2000;
res=res%2000;
thousand=res/1000;
res=res%1000;
fiveH=res/500;
res=res%500;
twoH=res/200;
res=res%200;
hundred=res/100;
res=res%100;
fifty=res/50;
res=res%50;

cout<<"50000: "<<fiftyT<<endl;
cout<<"20000: "<<twenty<<endl;
cout<<"10000: "<<ten<<endl;
cout<<"5000:  "<<five<<endl;
cout<<"2000:  "<<two<<endl;
cout<<"1000:  "<<thousand<<endl;
cout<<"500:   "<<fiveH<<endl;
cout<<"200:   "<<twoH<<endl;
cout<<"100:   "<<hundred<<endl;
cout<<"50:    "<<fifty<<endl;
cout<<"faltante:"<<res<<endl;


    
}