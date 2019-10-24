#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n;
  int r = (n*(n+1))/2;
  for(int i=0; i<n-1; i++){
    cin>>m;
    r -= m;
  }
  cout<<r<<endl;
  return 0;
}
