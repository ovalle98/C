#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  uint64_t a[2];
  for(int i=0; i<n; i++){
    cin>>a[0]>>a[1];
    cout<<(uint64_t)(pow(a[0],a[1])) % 10<<endl;
  }
  return 0;
}
