#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    stack <int> pila;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if(x == 1) {
            cin >> y;
            pila.push(y);
        }
        else if(x == 2)
            pila.pop();
        else
          cout<<pila.top()<<endl;
    }  

    return 0;
}
