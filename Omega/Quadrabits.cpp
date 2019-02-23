#include <bits/stdc++.h>
using namespace std;

int main(){
  string x, r;
  int n, o,k;
  cin>>x;
  cin>>n;
  for (int i=0; i<n; i++) {
      cin>>o>>k;
      if(o == 1)
        r = x >> k;
      else if(o == 2)
        r = x << k;
      x = r;
  }
  cout<<x<<endl;
  return 0;
}
