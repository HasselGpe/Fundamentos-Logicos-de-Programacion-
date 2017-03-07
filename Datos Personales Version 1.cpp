#include <iostream>
#include <string>

using namespace std;
int main()
{

   string Salir;
   string h;
   string b;
   string c;
   string a;
   string f;
   string g;
   string d;

   do
   {
      cout << "Hecho por Hassel Guadalupe Ortega Pelaez" << endl;
         cout << "Solicitud de datos personales" << endl;
         cout << "Escribe tu nombre" << endl;
      cin >> a;
      cout << "El nombre que capturo es: "<<a << endl;
       cout << "Escribe tu apellido paterno" << endl;
      cin >> b;
      cout << "El Apellido que capturo es: "<<b << endl;
      cout << "Escribe tu apellido materno" << endl;
      cin >> c;
      cout << "El Apellido que capturo es: "<<c << endl;
         cout << "Escribe tu edad" << endl;
      cin >> d;
      cout << "La edad que capturo es: "<<d << endl;
      cout << "Escribe tu genero" << endl;
      cin >> f;
      cout << "El Genero que capturo es: "<<f << endl;
       cout << "Escribe tu ocupación" << endl;
      cin >> g;
      cout << "La Ocupacion que capturo es: "<<g << endl;
      cout << "Escribe tu Domicilio" << endl;
      cin >> h;
      cout << "El Domicilio que capturo es: "<<h << endl;
       cout << "Lo datos personales escritos son: "<<a << endl <<b << endl <<c << endl <<d << endl <<f << endl <<g << endl <<h << endl;
         cout << "Deseas salir" << endl;
      cin >> Salir;

   }
   while (Salir=="no");
   cout << "Gracias por su tiempo" << endl;
   return 0;
}
