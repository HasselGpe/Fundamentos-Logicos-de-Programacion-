#include <iostream>
#include <string>

using namespace std;
int main()
{

   string salir;
    int edad;

   do
   {
      cout << "Programa echo por hassel ortega" << endl;
       cout << "Bienvenido este programa observa si ere mayor de edad para poder asister al evento" << endl;
         cout << "Dame tu edad" << endl;
      cin >> edad;
      cout << "La edad que capturo es: "<<edad << endl;
      if (edad>=18)
      {
         cout << "Felicidades eres mayor de edad puedes asistir al evento" << endl;      }
      else
      {
         cout << "Lo siento eres menor de edad aun tienes que esperar un tiempo mas" << endl;      }
      cout << "Deseas Salir" << endl;
      cin >> salir;
   }
    while (salir=="no");
   cout << "Gracias por su tiempo" << endl;
   return 0;
}
