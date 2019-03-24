#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.sync_with_stdio(false);
  uint64_t n=0, t=0;
  cin>>n;
  int64_t x[n+1];
  x[0] = 0;
  for(int i=1; i<=n; i++){
      x[i]=((i*i+i)/2) + x[i-1];
      //cout<<x[i]<<endl;
      t+=x[i];
  }

  cout<<t<<endl;
  return 0;
}
