#include <bits/stdc++.h>
using namespace std;

int main(){
  int m,n;
  cin>>m;
  for(int i=0; i<m; i++){
    cin>>n;
    if(n%100 == 0 && n%400 !=0)
      cout<<"N"<<endl;
    else if(n%4 == 0 || (n%100==0 && n%400==0))
      cout<<"S"<<endl;
    else
      cout<<"N"<<endl;
  }
  return 0;
}
