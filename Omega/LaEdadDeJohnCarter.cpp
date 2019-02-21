#include <bits/stdc++.h>
using namespace std;

int main(){
  long n, x, y=0;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>x;
    y += x;
  }
  cout<<y/365<<endl;
  return 0;
}
