#include <bits/stdc++.h>
using namespace std;

int main(){
  string a,b, aux="";
  cin>>a>>b;
  cout<<a.size()<<" "<<b.size()<<endl;
  aux = b[0];
  cout<<a+b<<endl;
  cout<<b[0] + a.substr(1)<<" "<<a[0] + b.substr(1)<<endl;
  return 0;
}
