#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N,x,j=1;
  vector<string> cas;
  int cont=0, ceros=0;
  string aux;

  while (cin>>N && N!=0) {
    cont=0;
    ceros=0;
    for(int i=0;i<N;i++)
    {
      cin>>x;
      if(x!=0) cont++;
      else ceros++;

      //cout<<cont<<" "<<ceros<<endl;
    }

    aux = "Case "+ to_string(j)+": "+to_string(cont-ceros);
    cas.push_back(aux);
    j++;
  }

  for (int i = 0; i < cas.size(); i++) {
    cout<<cas.at(i)<<endl;
  }


  return 0;
}
