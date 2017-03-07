#include <iostream>
#include <string>

using namespace std;
int main()
{
   int estatura;
   double peso;
   double imc;
   string salir;

     do
   {
      cout << "Este programa es echo por hassel ortega" << endl;
       cout << "Este programa calcula el indice de masa corporal" << endl;
          cout << "Proporciona tu peso" << endl;
      cin >> peso;
      cout << "Proporciona tu estatura" << endl;
      cin >> estatura;
      imc =peso/(estatura*estatura);
      cout << "tu IMC es "<<imc << endl;
      if (imc<=16)
      {
         cout << "Delgadez severa consulta a un medico" << endl;      }
      else
      {
         if (imc<=16.99)
         {
            cout << "Delgadez moderada checa con un medico" << endl;         }
         else
         {
            if (imc<=18.49)
            {
               cout << " Delgadez leve Deberias comer mas" << endl;            }
            else
            {
               if (imc<=24.99)
               {
                  cout << "Normal estas en el peso ideal" << endl;               }
               else
               {
                  if (imc<=29.99)
                  {
                     cout << "Preobeso consulte a medico" << endl;                  }
                  else
                  {
                     if (imc<=34.99)
                     {
                        cout << "Obesidad leve haz ejercicio" << endl;                     }
                     else
                     {
                        if (imc<=39.99)
                        {
                           cout << " Obesidad media come mejor y haz mas ejercicio VISITA AL MEDICO" << endl;                        }
                        else
                        {
                           if (imc>=40)
                           {
                              cout << "Obesidad mórbida NECESITAS URGENTEMENTE AYUDA VE AL MEDICO" << endl;                           }
                           else
                           {
                           }
                        }
                     }
                  }
               }
            }
         }
      }
      cout << "Deseas Salir" << endl;
      cin >> salir;
   }
   while(salir=="no");
   cout << "Gracias por su coloboración" << endl;
   return 0;
}
