#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    string a = (s.size()%2) == 0 ? "SI" : "NO";
    cout<<a<<endl;
  }
  return 0;
}
