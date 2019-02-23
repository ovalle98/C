#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  int cont = 0;
  cin>>a>>b>>c;
  if(a*a + b*b == c*c)
    cont = 1;
  else if(a*a + c*c == b*b)
    cont = 1;
  else if(b*b + c*c == a*a)
    cont = 1;

  if(cont == 1)
    cout<<"Si"<<endl;
  else
    cout<<"No"<<endl;
  return 0;
}
