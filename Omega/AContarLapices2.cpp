#include <iostream>
using namespace std;

int lapiz[1000000];
int main(){
  int n, k, aux;
  cin>>n>>k;
  for (int i=0; i<n; i++) {
    cin>>aux;
    lapiz[aux-1]++;
  }
  cout<<"Hay "<<lapiz[k-1]<<" l"<<(char)160<<"pices del n"<<(char)163<<"mero "<<k<<"."<<endl;
  //printf("Hay %d l%cpices del n%umero ",162, 162); //ó
  return 0;
}
