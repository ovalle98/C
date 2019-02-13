#include <bits/stdc++.h>

using namespace std;

int main() {
  int n=0, k=0;
  int max=0, aux=0;
  int cont=0;
  cin>>n>>k;
  int caja[n];
  for(int i=0; i<n; i++){
    cin>>caja[i];
    if(i<k)
      aux+=caja[i];
  }
  if(aux > max)
    max = aux;

  for(int i=1; i<n-k; i++){
    aux=0;
    for(int j=i; j<k+i; j++)
      aux+=caja[j];
    if(aux>max)
      max=aux;
  }
  cout<<max<<endl;
  return 0;
}
