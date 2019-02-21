#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  string r = "";
  int n[t][4];
  int abcd[4][2];
  for(int i=0; i<t; i++){
    cin>>n[i][0]>>n[i][1]>>n[i][2]>>n[i][3];
    int x = n[i][0] + n[i][2];
    int y = n[i][1] + n[i][3];
    for(int j=0; j<4; j++){
      cin>>abcd[j][0]>>abcd[j][1];
      if(x == abcd[j][0] && y == abcd[j][1] && j==0)
        r+="A";
      else if(x == abcd[j][0] && y == abcd[j][1] && j==1)
        r+="B";
      else if(x == abcd[j][0] && y == abcd[j][1] && j==2)
          r+="C";
      else if(x == abcd[j][0] && y == abcd[j][1] && j==3)
        r+="D";
    }
  }
  cout<<r<<endl;
  return 0;
}
