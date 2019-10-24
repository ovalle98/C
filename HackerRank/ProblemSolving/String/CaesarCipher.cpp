#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  string s,r="";
  cin>>n>>s>>k;
  for(char c: s)
    if((int(c)>64 && int(c)<91)){
      int aux = (int(c) - 65);
      aux = (aux + k) % 26;
      r += (aux + 65);
    }
    else if(int(c)>96 && int(c)<123){
      int aux = (int(c) - 97);
      aux = (aux + k) % 26;
      r += (aux + 97);
    }
    else r += c;
  cout<<r;
  return 0;
}
