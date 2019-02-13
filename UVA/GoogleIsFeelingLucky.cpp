#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  string v[10][t];
  string resultado[10];
  int mayor = 0;
  while (t--) {
    for (int i = 0; i < 10; i++) {
      getline(cin,v[i][t]);
      string aux = "";
      for(int x=v[i][t].size(); x>1; x--){
        cout<<v[i][t][x-1]<<endl;
        if(int(v[i][t][x-1]) > 47 && int(v[i][t][x-1]) < 58)
          aux = v[i][t][x-1]+aux;
      }
      cout<<"A "<<aux;
    }
  }
  return 0;
}
