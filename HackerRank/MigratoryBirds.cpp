#include <bits/stdc++.h>
using namespace std;
int pa[1000000];
int main(){
  int64_t n, may=0, ind=0;
  int x;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>x;
    pa[x]++;
    if(pa[x] == may){
      if(x < ind) ind =x;
    }
    else if(pa[x] > may) {
      may = pa[x];
      ind = x;
    }
  }
  cout<<ind<<endl ;
  return 0;
}
