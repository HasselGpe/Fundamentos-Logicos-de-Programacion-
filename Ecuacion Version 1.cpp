#include <iostream>
#include <string>

using namespace std;
int main()
{
   int ecuacion;
   int X;
   int Y;
    string Salir;

 do
   {
      cout << "Hecho por Hassel Guadalupe Ortega Pelaez" << endl;      cout << "Este Programa va a realizar la siguiente ecuación" << endl;
          cout << "(X+2)+(y-3)" << endl;
           cout << "Dame el Valor de X" << endl;
      cin >> X;
      cout << "El Numero que capturo es: "<<X << endl;
        cout << "Dame el valor de Y" << endl;
      cin >> Y;
      cout << "El Numero que capturo es: "<<Y << endl;
       ecuacion =(X+2)+(Y-3);
      cout << "El resultado de la ecuacion  (X+2)+(Y-3)="<<ecuacion << endl;
        cout << "Fecha 27 de enero del 2015" << endl;
         cout << "Deseas Salir" << endl;
      cin >> Salir;
   }
   while (Salir=="no");
   cout << "Gracias por su colaboración" << endl;
   return 0;
}
