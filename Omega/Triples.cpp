#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x, cont=0;
  vector<int> lista;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>x;
    if(x % 3 == 0){
      lista.push_back(i+1);
      cont++;
    }
  }

  if(cont > 0){
    cout<<cont<<endl;
    for(int i=0;  i<lista.size(); i++)
      cout<<lista[i]<<" ";
  }
  else
    cout<<"No hay triples."<<endl;
  return 0;
}
