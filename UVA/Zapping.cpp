#include <bits/stdc++.h>

using namespace std;

int main() {
  int canal1, canal2;
	int tc = 0, tc2 = 0;
  	cin>>canal1>>canal2;
  while(canal1 > -1 && canal2  > -1){
    tc = canal2-canal1;
    if(tc > tc2)
      tc2 = 100+canal1-canal2;
    else
      tc2 = 100+canal2-canal1;

    if(tc < 0)
      tc = -1*tc;
    if(tc2 < 0)
      tc = -1*tc2;

    if(tc < tc2)
      cout<<tc<<endl;
    else if(tc > tc2)
      cout<<tc2<<endl;
    else
      cout<<tc<<endl;
    tc = 0; tc2 = 0;
    cin>>canal1>>canal2;
  }


  return 0;
}
