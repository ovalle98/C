#include <iostream>

using namespace std;

int main(){
  int n[3], aux;
  cin>>n[0]>>n[1];
  if(n[0] > n[1]){
    aux = n[0];
    n[0] = n[1];
    n[1] = aux;
  }
  cin>>n[2];
  if(n[2] < n[0]){
    aux = n[2];
    n[2] = n[1];
    n[1] = n[0];
    n[0] = aux;
  }
  if(n[2] > n[0] && n[2] < n[1]){
    aux = n[1];
    n[1] = n[2];
    n[2] = aux;
  }

  char a[3];
  cin>>a;
  for(int i =0; i<3; i++){
    if(a[i] == 'A')
  	  cout<<n[0];
    else if(a[i] == 'B')
      cout<<n[1];
    else
      cout<<n[2];
    if(i == 2)
    	cout<<endl;
    else
    cout<<" ";
  }
  return 0;
}
