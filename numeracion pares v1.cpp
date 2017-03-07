#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

 //Definicion de variables
 int _cont;
 int valor;

 printf("este programa muestra una serie de numeros pares \nElige el fin de la numeraci%cn:  \n", 162);
	cin>>valor;


 _cont=0;
 while(_cont<=valor){//limita el conteo hasta 100
    if(_cont%2==0){//verificar si es par
      cout<<" "<<_cont<<",";
     }//END verificar si es par
   _cont++;//Se incrementa la variable
  }//END limita el conteo hasta 100
 getch();
}
