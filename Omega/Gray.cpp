#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  uint64_t a,b;
  cin>>a;
  b = a >> 1;
  a= a ^ b;
  cout<<a<<endl;
}
