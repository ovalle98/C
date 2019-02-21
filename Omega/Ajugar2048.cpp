#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int j=0, t, x[n]={0}, i;
  for(i=0; i<n; i++){
    cin>>x[j];
    j++;
    if(i > 0){
      int k=j;
      while(k > 0){
        if(x[k] == x[k-1]){
          //cout<<"= "<<x[k]<<" "<<x[k-1]<<" "<<k<<" "<<j<<endl;
          x[k-1] = x[k-1]*2;
          x[k] =0;
          j--;
          k--;
        }
        else
          k--;
        t=i-j;
      }
        /*for(int k=0; k<n; k++)
          cout<<x[k]<<" ";
      cout<<endl;*/
    }
  }
  cout<<i-j<<endl;
  for(int k=0; k<n; k--)
    if(x[k] != 0)
    	cout<<x[k]<<endl;
  return 0;
}
