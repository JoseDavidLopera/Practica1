#include <iostream>
using namespace std; 

char word; 



int main(){

cout<<"ingrese un caracter: ";
cin>>word;
if ((word>64 && word<91) || (word>96 && word<123)){
    if (word==97 || word==101 || word==105 || word==111 || word==117 || word==65 || word==69 || word==73 || word==79 || word==85){
        cout<<word<<" es una vocal"<<endl;
            }
        else{
      
        
        cout<<word<<" es una consonante"<<endl;
                    }
                }
        else{
            cout<<"no es una letra"<<endl;
        }



}