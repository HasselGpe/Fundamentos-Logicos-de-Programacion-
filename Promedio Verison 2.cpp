#include <iostream>
#include <string>

using namespace std;
int main()
{
   system("color 07");
   int promedio;
   string salir;
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
    cout<<"**           Este programa promedia 8 materias               **\n";
    cout<<"**###########################################################**\n";
      cout << "Dame el primer valor a promediar" << endl;
      cin >> a;
      printf("El n%cmero que capturo es: ",163);  cout <<a << endl;
       cout << "Dame el segundo valor a promediar" <<endl;
      cin >> b;
       printf("El n%cmero que capturo es: ",163); cout <<b << endl;
       cout << "Dame el tercer valor a promediar" << endl;
      cin >> c;
       printf("El n%cmero que capturo es: ",163); cout <<c << endl;
         cout << "Dame el Cuarto valor a promediar" << endl;
      cin >> d;
       printf("El n%cmero que capturo es: ",163); cout <<d << endl;
      cout << "Dame el quinto valor a promediar" << endl;
      cin >> f;
       printf("El n%cmero que capturo es: ",163); cout <<f << endl;
        cout << "Dame el Sexto valor a promediar" << endl;
      cin >> g;
       printf("El n%cmero que capturo es: ",163); cout <<g << endl;
       cout << "Dame el Septimo valor a promediar" << endl;
      cin >> h;
      printf("El n%cmero que capturo es: ",163); cout <<h << endl;
       cout << "Dame el octavo valor a promediar" << endl;
      cin >> i;
       printf("El n%cmero que capturo es: ",163); cout <<i << endl;
       promedio =(a+b+c+d+f+g+h+i)/8;
       cout << "El PROMEDIO DE "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<f<<"+"<<g<<"+"<<h<<"+"<<i<<"/8 es.."<<promedio << endl;
      printf("%CDeseas Salir%C\n",168,63);
      cin >> salir;

   }
   while (salir=="no");
   cout << "Gracias por usar el programa" << endl;
   return 0;
}
