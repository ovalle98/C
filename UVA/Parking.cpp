#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int t, n, x;
  cin>> t;
  for(int i=0; i<t; i++){
    int max = 0, min = 10000;
    cin>>n;
    for(int j=0; j<n; j++){
      cin>>x;
      if(x > max)
        max = x;
      if(x < min )
        min = x;
    }
    cout<<(max-min)*2<<endl;
  }
  return 0;
}
