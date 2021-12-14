#include <iostream>
using namespace std; 

int month; 
int day; 


int main(){

cout <<"ingrese un mes y luego el dia: "; 
cin>>month>>day; 

if(month<0 && month>12){

    cout<<month<<" - mes invalido";
}
else{

    if(month==2){
        if(day<29){
            cout<<day<<"/"<<month<<" es una fecha valida"<<endl;
            }
         else if(day==29){
            cout<<day<<"/"<<month<<" es valida en bisiesto"<<endl;
            }
        else{
            cout<<day<<"/"<<month<<" es una fecha invalida"<<endl;
            }

    }
    else if(month==4 || month==6 || month==9 ||month==11){
        if (day<=30){
            cout<<day<<"/"<<month<<" es una fecha valida"<<endl;
        }
        else{
            cout<<day<<"/"<<month<<" es una fecha invalida"<<endl;
        }
     }
     else{
        if (day<=31){
            cout<<day<<"/"<<month<<" es una fecha valida"<<endl;
            }
        else{
            cout<<day<<"/"<<month<<" es una fecha invalida"<<endl;

        }    
    }
 }
}

