#include <bits/stdc++.h>
using namespace std;

int main(){
  int ph;
  cin>>ph;
  if(ph >-1 && ph <7) cout<<"Acido"<<endl;
  else if(ph >7 && ph <15) cout<<"Base"<<endl;
  else if(ph == 7) cout<<"Neutro"<<endl;
  else cout<<"Are you kidding me?"<<endl;
  return 0;
}
