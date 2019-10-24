#include <bits/stdc++.h>
using namespace std;

int main(){
  uint64_t a, b;
  string c;
  cin>>a>>b>>c;
  for(int i=0; i<c.size(); i++){
    int z = int(c[i]) - 65;
    z = (a*z + b) % 26;
    cout<<char(z+65);
  }
  return 0;
}
