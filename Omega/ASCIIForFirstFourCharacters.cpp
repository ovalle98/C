#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int a;
  cin>>s;
  if(s.size() <5) a=s.size();
  else a=4;
  for(int i=0; i<a; i++)
  cout<<s[i]<<" ASCII value is "<<int(s[i])<<endl;
  return 0;
}
