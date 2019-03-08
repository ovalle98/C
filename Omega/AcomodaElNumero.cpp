#include <iostream>
using namespace std;

int main(){
  cin.sync_with_stdio(false);
  uint64_t n, m, a0, p=0;
  cin>>n>>a0;
  for(int i=1; i<n; i++){
      cin>>m;
      if(a0 > m) p++;
  }
  cout<<p<<endl;
  return 0;
}
