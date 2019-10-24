#include <bits/stdc++.h>

using namespace std;
string h = "hackerrank";
int cont = 0;
int main(){
  int n;
  string s;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>s;
    for(int j=0; j<s.size(); j++)
      if(s[j] == h[cont]) cont++;
    if(cont == h.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    cont = 0;
  }
  return 0;
}
