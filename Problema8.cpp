#include <iostream>
using namespace std;  

int a; 
int b; 
int c; 
int acum; 
int aux; 
int i; 
int j; 
int k; 
int u; 
int n;  

int main(){

cout<<"ingrese los valores de a, b y c respectivamente: "<<endl; 
cin>>a>>b>>c;

for (i=1;i<c;i++){
    k=i*a;

    if (k >=c){
        for (j=1;j<c;j++){
            u=j*b;
            if(u>=c)break;

            else if(u<c){
                for( n=1;n<c;n++){
                    k=n*a;
                    if (k==u){
                        aux=1;
                        }
                    }
                    if(aux != 1){
                        acum+=u;
                        cout<<u<<"+";
                         }
                     else aux=0;
                            }
                        }
 break;
}
else if(k<c){
    acum+=k;
    cout<<k<<"+";
        }
    }
    cout<<"="<<acum<<endl;




}

