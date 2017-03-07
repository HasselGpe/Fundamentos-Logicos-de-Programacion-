#include <iostream>
#include <string>

using namespace std;
int main()
{
   system("color 7A");
   int b;
   int c;
   string salir;
   int a;
   int multiplicación;

  do
   {
      cout << "Este programa multiplica 3 numeros" << endl;
       cout << "Dame el primer valor a multiplicar" << endl;
      cin >> a;
      cout << "El numero que capturo es: "<<a << endl;
         cout << "Dame el segundo valor a multiplicar" << endl;
      cin >> b;
      cout << "El numero que capturo es: "<<b << endl;
       cout << "Dame el tercer valor a multiplicar" << endl;
      cin >> c;
      cout << "El numero que capturo es: "<<c << endl;
       multiplicación =a*b*c;
      cout << "El resultado de Multiplicar es: "<<multiplicación << endl;
       cout << "Quieras salir" << endl;
      cin >> Salir;

   }
   while (Salir=="no");
   cout << "Gracias" << endl;
   return 0;
}
