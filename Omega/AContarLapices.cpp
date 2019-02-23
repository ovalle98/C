#include <bits/stdc++.h>
using namespace std;

int lapiz[1000000];
int main(){
  int n, k, aux;
  cin>>n>>k;
  for (int i=0; i<n; i++) {
    cin>>aux;
    lapiz[aux-1]++;
  }
  cout<<lapiz[k-1];
  return 0;
}
