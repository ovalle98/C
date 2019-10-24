#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, n="";
    cin >> str;
    vector<string> res;
    int cont=0, cont2=0, i;
    for(int i=0; i<str.size(); i++){
      if(str[i] == ',') cont ++;
    }
    for(i=0; i<str.size(); i++){
      if(str[i] == ','){
        res.push_back(n);
        n = "";
        cont2 ++;
      }
      else
        n += str[i];
    }
    res.push_back(n);

    for(i=0; i<res.size(); i++) cout<<res[i]<<endl;

    return 0;

}
