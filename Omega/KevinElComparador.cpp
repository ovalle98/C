#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n, x,y;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>x>>y;
    if(x > y) cout<<x<<endl;
    else if(y > x) cout<<y<<endl;
    else cout<<"NO ITZMAN"<<endl;
  }
}
