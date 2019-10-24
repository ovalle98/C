#include <bits/stdc++.h>

using namespace std;

int contains(string s, string a){
    for(char c : s)
      if(a.find(c) != string::npos) return 0;
    return 1;
}

int main(){
  int n, r=0;
  string s;
  cin>>n>>s;

  r += contains(s, "0123456789");
  r += contains(s, "abcdefghijklmnopqrstuvwxyz");
  r += contains(s, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  r += contains(s, "!@#$%^&*()-+");

  cout<<max(6-n, r);
  return 0;
}
