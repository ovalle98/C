#include <bits/stdc++.h>

using namespace std;

int main() {
  string texto, texto2;
  cin>>texto;
  for(int j=texto.size()-1; j>=0; j--){
    texto2+=texto[j];
  }
  if(texto2 == texto)
    cout<<"Si"<<endl;
  else
  cout<<"No"<<endl;
  return 0;
}
