#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string happy[16] {"Happy", "birthday","to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to"
              ,"Rujia", "Happy", "birthday", "to", "you"};
  int n, limite=16, cont=0;
  cin>>n;
  string nombres[n];
  for(int i=0; i<n; i++)
    cin>>nombres[i];

  if(n > 16 && n%16 == 0)
    limite = n / 16;

  if(n > 16 && n%16 != 0)
      limite = ((n / 16) + 1)*16;

  int i = 0, aux = 0;
  while (cont < limite){
    cout<<nombres[i]<<": "<<happy[aux]<<endl;
    cont++;
    i++;
    aux++;
    if(i == n)
      i = 0;
    if(aux >= 16)
      aux = 0;
  }

  return 0;
}
