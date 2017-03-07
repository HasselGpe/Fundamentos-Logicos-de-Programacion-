#include <iostream>
#include <string>

using namespace std;
int main()
{
   string Salir;
   int calif;

   do
   {
      cout << "Este programa esta echo por hassel ortega" << endl;
        cout << "este programa es para obtener la letra que corresponde a tu calificacion" << endl;
         cout << "10=A+ 9=A 8=B 7=C 6=D 5=F" << endl;
          cout << "Cual es tu calificacion (valor entero)" << endl;
      cin >> calif;
      if (calif==10)
      {
         cout << "tienes una A+ felicidades" << endl;      }
      else
      {
         if (calif==9)
         {
            cout << "tienes una A Bien hecho" << endl;         }
         else
         {
            if (calif==8)
            {
               cout << "tienes una B no es ta tan mal" << endl;            }
            else
            {
               if (calif==7)
               {
                  cout << "tienes una C estudia mas" << endl;               }
               else
               {
                  if (calif==6)
                  {
                     cout << "tienes una D deja mucho que desear" << endl;                  }
                  else
                  {
                     if (calif==5)
                     {
                        cout << "tienes una F por poco pasas" << endl;                     }
                     else
                     {
                     }
                  }
               }
            }
         }
      }
      cout << "Deseas Salir" << endl;
      cin >> Salir;
   }
   while (Salir=="no");
   cout << "Gracias Por su colaboración" << endl;
   return 0;
}
