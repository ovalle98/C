#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, cont = 0;
  cin>>n>>k;
  vector<int> a;
  for(int i=0; i<n; i++){
  	int y;
    cin>>y;
    a.push_back(y);
  }
  sort(a.begin(), a.end());
  int x=0;
  while(x <= n){
    if(a[0] >= k){
      cout<<cont<<endl;
      break;
    }
    else if(x == n-1){
      cout<<"-1"<<endl;
      break;
    }
    else{
      a.push_back(1*a[0] + 2*a[1]);
      a.erase(a.begin(), a.begin()+1);
      a.erase(a.begin(), a.begin()+1);
      sort(a.begin(), a.end());
      cont++;
    }
    x++;
  }
  return 0;
}
