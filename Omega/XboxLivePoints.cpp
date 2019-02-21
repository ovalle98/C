#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
      cin>>A[i];
    int aux = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        aux+= A[i];
        if(aux < 0)
          aux = 0;
        else if(sum < aux)
          sum = aux;
    }
    cout<<sum<<endl;
    return 0;
}
