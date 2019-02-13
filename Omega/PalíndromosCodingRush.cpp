#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--){
  	string texto, texto2;
    cin>>texto;
    for(int j=texto.size()-1; j>=0; j--){
      texto2+=texto[j];
    }
    if(texto2 == texto)
      cout<<"P"<<endl;
    else
      cout<<"NP"<<endl;

  }
	return 0;
}
