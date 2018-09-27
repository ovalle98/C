#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  string car[n];
  for (int i=0; i < n; i++) {
    cin>>car[i];
  }



for (int i=0; i < n; i++) {
    if(car[i].length()>3)
        cout<<"3"<<endl;
    else if((car[i].find("o")<3 && car[i].find("n")<3) ||
            (car[i].find("e")<3 && car[i].find("n")<3) ||
            (car[i].find("o")<3 && car[i].find("e")<3) )
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;

  }
  return 0;
}
