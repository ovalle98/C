#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y,n;
  cin>>n;
  vector < pair<int,int> > xy, r;
  for (int i = 0; i < n; i++) {
      cin>>x>>y;
      xy.push_back(make_pair(x, y));
  }
  sort(xy.begin(), xy.end());
  for (int i = 0; i <n; i++)
    if(xy[i-1].first == xy[i].first) continue;
    else if(xy[i].first == xy[i+1].first)
      if(xy[i].second < xy[i+1].second)
        r.push_back(xy[i]);
      else r.push_back(xy[i+1]);
    else r.push_back(xy[i]);

  cout<<r.size()<<endl;
  for(int i=0; i<r.size(); i++)
    cout<<r[i].first<<" "<<r[i].second<<endl;
  return 0;
}
