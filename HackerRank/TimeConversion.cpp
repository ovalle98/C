#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  string h[3];
  bool pm = false;
  int hh=0, cont=0;
  cin>>s;
  for(int i=0; i<s.length()-2; i++){
    if(s[i] != ':') h[cont]+=s[i];
    else cont++;
  }
  if(s[s.length()-2] == 'P') pm = true;
  if(!pm){
    if(s[0] == '1' && s[1] == '2') h[0] = "00";
    cout<<h[0]<<":"<<h[1]<<":"<<h[2]<<endl;
  }else{
  	if(s[0] == '1' && s[1] == '2') hh=12;
    else hh = stoi(h[0]) + 12;
    cout<<hh<<":"<<h[1]<<":"<<h[2]<<endl;
  }

  return 0;
}
