#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int T, aux=0;
  cin>>T;
  int ma[T], me[T];
  int n[T][T];


  for (int i = 0; i < T; i++)
  {
    cin>>n[i][0];
    ma[i]=n[i][0];
    me[i]=n[i][0];
    for(int j=1;j<3;j++)
    {
      cin>>n[i][j];
      if(ma[i]<n[i][j])
        ma[i]=n[i][j];
      if(me[i]>n[i][j])
        me[i]=n[i][j];
    }
    //cout<<endl<<ma[i]<<" "<<me[i]<<endl;
  }




  for (int i = 0; i < T; i++) {
    if(me[i]== ma[i])
      aux=ma[i];
    else
      for (int j = 0; j < 3; j++) {

        if (n[i][j]== me[i]) {
        }
        else if (ma[i]==n[i][j]) {

        }
        else
          aux=n[i][j];
      }
    cout<<"Case "<<i+1<<": "<<aux<<endl;
  }

  return 0;
}
