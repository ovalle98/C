#include <iostream>
using namespace std;

int main(){
  cin.sync_with_stdio(false);
  uint64_t N, n=1, suma=1, pos=1, i=1;
  cin>>N;
  N = N*N;
  while (n <= N) {
    suma += i;
    if(i >= n){
      pos += 2;
      n = pos * pos;
    }
    i += pos - 1;
  }
  cout<<suma-1;
  return 0;
}
