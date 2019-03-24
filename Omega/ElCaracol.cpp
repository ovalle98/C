#include <iostream>

using namespace std;

int main() {
  int64_t p, s, r, aux = 0, total = 0;
  cin>>p>>s>>r;
  while(true){
    aux += s;
    total ++;
    if(aux => p) break;
    aux -= r;
  }
  cout<<total<<endl;
  return 0;
}
