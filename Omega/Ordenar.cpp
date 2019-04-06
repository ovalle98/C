#include <bits/stdc++.h>
using namespace std;

int main(){
  int c=0;
  cin>>c;
  vector<int64_t> x;
  for(int i=0; i<c; i++){
    int y;
    cin>>y;
    x.push_back(y);
  }
  sort(x.begin(), x.end());
  for(int i=0; i<c; i++)
    cout<<x[i]<<" ";
  cout<<endl;
  return 0;
}
