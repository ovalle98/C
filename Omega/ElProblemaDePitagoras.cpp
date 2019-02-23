#include <bits/stdc++.h>
using namespace std;

int main(){
  int m,n, con;
  cin>>m>>n;
  for(int i = 1; i<=(n/5); i++){
    double a = 3*i;
    double b = 4*i;
    double c = 5*i;
    if((a*a + b*b) == c*c)
      con++;
  }
  cout<<con<<endl;
  return 0;
}
