#include <iostream>
using namespace std;
int fimpar(int);
int main(){
    int impar,resul;

    cout << "Numero Impar a Terminar : ";
    cin >> impar;


    resul=fimpar(impar);
    }
    int fimpar(int x)
    {
        int n=1;
    for(n;n<=x;n++){
        cout << "[" << n <<"] - ";
        n++;
        }
        return x;
        }

