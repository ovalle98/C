#include <bits/stdc++.h>
#define max 100

using namespace std;

int Numeros[10] = {0};

int DigitosNumeros(int Numero){
  int i = 0;
  int n;
  while(Numero > 0){
    Numeros[i]  = Numero % 10;
    Numero = Numero / 10;
    i++;
  }
  return 0;
}

int main() {
  int Numero = 0;
  cin>>Numero;
  int i = 0;
  int suma = 0;
  int z = 0;
  while (z < 20){
    DigitosNumeros(Numero);
    suma = 0;
    for (i = 0; i < 10; i++){
        suma = suma + Numeros[i];
    }

    if (suma == 1)
    {
        cout<<z+1<<endl;
        return 0;
    }

    suma = 0;
    for (i = 0; i < 10; i++)
    {
        suma = suma + pow(Numeros[i], 2);
    }

    Numero = suma;
    memset(Numeros,0,40);
    z++;
  }
  cout<<"-1"<<endl;
  return 0;
}
