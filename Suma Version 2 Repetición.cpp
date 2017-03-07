#include <iostream>
#include <string>
using namespace std;
int main()
{
    system("color 3");
   int suma;
   int b;
   string salir;
   int a;

   do
   {
      cout << "\t\t\tTrabajo  por Hassel Oretga" << endl;
        cout << "\t\t\tESTE PROGRMA SUMA DOS NUMEROS" << endl;
          cout << "\t\t\tDAME EL PRIMER VALOR A SUMAR" << endl;
      cin >> a;
      cout << "El numero que capturo es: "<<a << endl;
         cout << "DAME EL SEGUNDO VALOR" << endl;
      cin >> b;
      cout << "El numero que capturo es: "<<b << endl;
      suma =a+b;
      cout << "El resultado de sumar a+b es:"<<suma << endl;
        cout << "Desea salir" << endl;
      cin >> salir;

   }
      while (salir=="no");
      cout << "Gracias por tu participacion" << endl;
   return 0;
}
