#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  int matriz[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>matriz[i][j];
    }
  }

  for(int i=n-1; i>=0; i--){
    for(int j=0; j<m; j++){
      if(j == m-1)
        cout<<matriz[i][j];
      else
        cout<<matriz[i][j]<<" ";
    }
    cout<<endl;
  }


  return 0;
}
