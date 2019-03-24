#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    cin.sync_with_stdio(false);
    int n, c=0;
    cin >> n;
    if(n == 2){
      cout<<"PRIMO"<<endl;
    }
    else{
      for(int i=2; i<n; i++){
        if(n % i == 0 && c != 0){
          c = 2;
          break;
        }
        if(n % i == 0 && c==0)
          c = 1;
      }
      if(c < 2)
        cout<<"PRIMO"<<endl;
      else
        cout<<"COMPUESTO"<<endl;
    }
    return 0;
}
