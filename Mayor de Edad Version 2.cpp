#include <iostream>
#include <string>

using namespace std;
int main()
{
   string terminar;
   int fecha;
   int edad;

   do
   {
      cout << "Programa echo por hassel ortega" << endl;
      cout << "Bienvenido este programa observa si ere mayor de edad para poder asister al evento" << endl;
        cout << "Dame tu fecha de nacimiento" << endl;
      cin >> fecha;
      cout << "La fecha que capturo es: "<<fecha << endl;
       if (fecha<=1997)
      {
         cout << "Felicidades eres mayor de edad puedes asistir al evento" << endl;      }
      else
      {
         cout << "Lo siento eres menor de edad aun tienes que esperar un tiempo mas" << endl;      }
      edad =2015-fecha;
      cout << "tu edad es "<<edad << endl;
      cout << "Quieres Terminar el proceso" << endl;
      cin >> terminar;

   }
   while (terminar=="no");
   cout << "Gracias por su tiempo" << endl;
   return 0;
}
