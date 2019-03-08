#include <iostream>

using namespace std;

int main(){
  cin.sync_with_stdio(false);
  uint64_t n=0, x=0;
  cin>>n;
  for(uint64_t i=1; i<=n; i++)
    x+=(i*i+i)/2;
  cout<<x<<endl;
  return 0;
}
