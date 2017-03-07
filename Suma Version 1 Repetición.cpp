#include <iostream>
#include <string>
using namespace std;
int main()

{
   int suma;
   int b;
   string salir;
   int a;

do
   {
      cout << "Trabajo  por Hassel Oretga" << endl;
      cout << "ESTE PROGRMA SUMA DOS NUMEROS" << endl;
        cout << "DAME EL PRIMER VALOR A SUMAR" << endl;
      cin >> a;
      cout << "DAME EL SEGUNDO VALOR" << endl;
      cin >> b;
      suma =a+b;
      cout << "LA SUMA DE A+B ES  "<<suma << endl;
      cout << "Desea Salir" << endl;
      cin >> salir;

   }

   while (salir=="no");
   cout << "Gracias por tu tiempo" << endl;
   return 0;
}
