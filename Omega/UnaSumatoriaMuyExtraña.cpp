#include <iostream>
using namespace std;

int main(){
  int x, y, sx, sy;
  cin>>x>>y;
  cout<<(((y*y + y)/2)*((y*y + y)/2) + ((y*y + y)/2))/2 - ((((x*x + x)/2)-1)*(((x*x + x)/2)-1) + (((x*x + x)/2)-1))/2;
  return 0;
}
