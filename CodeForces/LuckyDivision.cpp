#include <bits/stdc++.h>
using namespace std;

int n[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

bool validar(int x){
  for(int i=0; i<14; i++){
    if(x % n[i] == 0) return true;
    if(n[i] > x) break;
  }
  return false;
}

int main(){
  int x;
  cin>>x;
  if(validar(x)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
