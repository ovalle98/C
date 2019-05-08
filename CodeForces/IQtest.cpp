#include <bits/stdc++.h>
using namespace std;
int num[2], num2[2];
int main(){
  int x, i=0;
  cin>>x;
  int n[x];

  for(i=0; i<x; i++){
    cin>>n[i];
    if(n[i]%2 == 0){
      //Par
      num[0] = i+1;
      num2[0]++;
    }
    else{
      //Inpar
      num[1] = i+1;
      num2[1]++;
    }

    if(num2[1]==1 && num2[0]>1){
      cout<<num[1]<<endl;
      break;
    }
    else if(num2[0] == 1 && num2[1]>1){
      cout<<num[0]<<endl;
      break;
    }
  }
  return 0;
}
