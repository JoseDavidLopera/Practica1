#include <iostream>
using namespace std; 

int c;
int aux;
int j;
int i;
int hora;
int horar;
int horas;
int num;
int res;



int main(){

cout<<"ingrese el primer valor de la hora"<<endl;
cin>>num;
res=num%100;
horas=num/100;
cout<<"ingrese segundo valor ";
cin>>horar;
if(((num%100)<=59)&&((horar%100)<=59)){

    j=horar/100;
    i=horar%100;
    cout<<horas<<res<<endl;
    cout<<j<<i<<endl;
    if(res+i>=60){
        aux=res+i;
        c=aux/60;
        res=aux%60;
        hora=horas+j+c;
        cout<<"la hora final es:"<<hora <<":"<<res;
    }

    else{
        hora=horas+j;
        res=res+i;
        cout<<"la hora final es:"<<hora<<":"<<res;
        }
    }
    else {
        cout<<"alguno o ambos de los dos formatos de hora son invalidos ";

    }       



}