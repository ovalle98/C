#include <iostream>
using namespace std;

int main(){
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int r = ((k*l)/nl) / n;
  int r2 = (c*d)  / n;
  if(r2 < r) r = r2;
  int r3 = (p/np) / n;
  if(r3 < r) r = r3;
  cout<<r<<endl;
  return 0;
}
