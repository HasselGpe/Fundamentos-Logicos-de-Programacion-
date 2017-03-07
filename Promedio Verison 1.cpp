#include <iostream>
#include <string>

using namespace std;
int main()
{
   system("color 05");
   int promedio;
   string terminar;
   int i;
   int h;
   int b;
   int c;
   int a;
   int f;
   int g;
   int d;

   do
   {
    cout<<"#############################################################**\n";
    cout<<"**            Trabajo  por Hassel Ortega                     **\n";
   printf("**           Este programa promedia 8 materias               **\n",163);
    cout<<"**###########################################################**\n";
      cout << "Dame el primer valor a promediar" << endl;
      cin >> a;
      cout << "Dame el segundo valor a promediar" << endl;
      cin >> b;
      cout << "Dame el tercer valor a promediar" << endl;
      cin >> c;
      cout << "Dame el Cuarto valor a promediar" << endl;
      cin >> d;
      cout << "Dame el quinto valor a promediar" << endl;
      cin >> f;
      cout << "Dame el Sexto valor a promediar" << endl;
      cin >> g;
      cout << "Dame el Septimo valor a promediar" << endl;
      cin >> h;
      cout << "Dame el octavo valor a promediar" << endl;
      cin >> i;
      promedio =(a+b+c+d+f+g+h+i)/8;
      cout << "El PROMEDIO DE "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<f<<"+"<<g<<"+"<<h<<"+"<<i<<"/8 es.."<<promedio << endl;
      printf("%CDeseas Salir%C\n",168,63);
      cin >> terminar;

   }
   while(terminar=="no");
   cout << "Gracias por usar el programa" << endl;
   return 0;
}
