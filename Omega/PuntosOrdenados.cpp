#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.sync_with_stdio(false);
  int n,x,y;
  //declaring vector of pairs
  vector < pair<int,int> > xy;
  cin>>n;
  for (int i = 0; i < n; i++) {
      cin>>x>>y;
      // Entering values in vector of pairs
      xy.push_back(make_pair(x, y));
  }

  sort(xy.begin(), xy.end());

  // Printing the vector
  for (int i = 0; i < n; i++)
    // "first" and "second" are used to access
    // 1st and 2nd element of pair respectively
    cout << xy[i].first << " " << xy[i].second << endl;

  return 0;
}
