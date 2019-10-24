#include <bits/stdc++.h>
using namespace std;

int main(){
  uint64_t n, d;
  cin>>n>>d;
  int c[n];
  for(int i=0; i<n; i++)
    c[i]=0;
  for(int i=0; i<d; i++){
    int a;
    cin>>a;
    c[a-1]++;
  }
  for(int i=0; i<n; i++)
    cout<<c[i]<<endl;
  return 0;
}
