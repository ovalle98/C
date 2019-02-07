#include <bits/stdc++.h>

using namespace std;
int mile(int x){
  int total = 0;
  int y = 0;
  y = x / 30;
  if(x-y != 0)
    y++;
  total+=y*10;
  return total;
}

int juice(int x){
  int total = 0;
  int y = 0;
  y = x / 60;
  if(x-y != 0)
    y++;
  total+=y*15;
  return total;
}

int main() {
  int T, N, y=0;

  cin>>T;
  for (int i = 0; i < T; i++) {
    cin>> N;
    int x, totalM = 0, totalJ = 0;

    for (int j = 0; j < N; j++) {
      cin>>x;
      totalM += mile(x);
      totalJ += juice(x);
    }

    if(totalM < totalJ)
      cout<<"Case "<<i+1<<": Mile "<<totalM<<endl;
    else if(totalM > totalJ)
      cout<<"Case "<<i+1<<": Juice "<<totalJ<<endl;
    else
	    cout<<"Case "<<i+1<<": Mile Juice "<<totalM<<endl;
  }

  return 0;
}
