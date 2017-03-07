#include <iostream>
#include <string>

using namespace std;
int main()
{
   system("color C0");
   double restar;
   double b;
   string salir;
   double a;

 do
   {
    cout<<"#############################################################**\n";
    cout<<"**            Trabajo  por Hassel Ortega                     **\n";
   printf("**            ESTE PROGRMA RESTA DOS N%CMEROS               **\n",163);
    cout<<"**###########################################################**\n";
       cout << "Dame el primer valor a restar" << endl;
      cin >> a;
      printf("El n%cmero que capturo es: ",163); cout <<a << endl;
       cout << "Dame el segundo valor a restar" << endl;
      cin >> b;
      printf("El n%cmero que capturo es: ",163); cout <<b << endl;
       restar =a-b;
      cout << "El resultado de Restar "<<a<<"-"<<b<<" es:"<<restar << endl;
        printf("%CDeseas Salir%C\n",168,63);
      cin >> salir;

   }
   while(salir=="no");
   cout << "Gracias por su colaboración" << endl;
   return 0;
}
