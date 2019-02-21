#include <bits/stdc++.h>

using namespace std;

int main() {
  vector< vector<int> > vec(6);
  for(int i=0; i<6; i++){
    vec[i].resize(6);
    for(int j=0; j<6; j++)
      cin>>vec[i][j];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  int max = -100000;
  //max += vec[0][0]+vec[0][1]+vec[0][2];
  //max += vec[1][1];
  //max += vec[2][0]+vec[2][1]+vec[2][2];

  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      int aux = 0;
      aux += vec[i][j] + vec[i][j+1] + vec[i][j+2];
      aux += vec[i+1][j+1];
      aux += vec[i+2][j] + vec[i+2][j+1] + vec[i+2][j+2];
      if(aux > max )
        max = aux;
    }
  }

  cout<<max<<endl;

  return 0;
}
