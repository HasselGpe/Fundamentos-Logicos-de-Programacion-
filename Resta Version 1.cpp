#include <iostream>
#include <string>

using namespace std;
int main()
{

   int restar;
   int b;
   string salir;
   int a;

  do
   {
      cout << "Este programa resta 2 numeros" << endl;
       cout << "Dame el primer valor a restar" << endl;
      cin >> a;
      cout << "Dame el segundo valor a restar" << endl;
      cin >> b;
      restar =a-b;
      cout << "LA Resta  DE A-B ES "<<restar << endl;
       cout << "Deseas salir" << endl;
      cin >> salir;

   }
   while (salir=="no");
   cout << "Gracias por su tiempo" << endl;
   return 0;
}
