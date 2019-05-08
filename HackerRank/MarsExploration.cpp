#include <bits/stdc++.h>
using namespace std;

int main(){
  string cad = "";
  string sos="SOS";
  int cont = 0;
  cin>>cad;
  for(int i=0; i<cad.size(); i=i+3){
    if(sos[0] != cad[i]) cont++;
    if(sos[1] != cad[i+1]) cont++;
    if(sos[2] != cad[i+2]) cont++;

  }
  cout<<cont<<endl;
  return 0;
}
