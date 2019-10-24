#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;

  for (int i = 1; i < str.size(); i++)
      if (str[i] == str[i-1]) {
          str = str.substr(0, i-1) + str.substr(i+1);
          i = 0;
      }

  if (str.size() == 0) cout<<"Empty String"<<endl;
  else cout<<str<<endl;
  return 0;
}
