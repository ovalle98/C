#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a = -1;
    for (int i = 0; i < n+1; i++) {
        int esp = n-i;
        a += 2;
        int aux = a;
        for (int j = 0; j < 2*n+1; j++) {
            if(esp > 0) {
                cout << " ";
                esp--;
            }
            else if(aux > 0) {
                if(a == 1)
                  cout << "*";
                else cout << "0";
                  aux--;
            }
            else
                break;
        }
        cout <<endl;
    }
    return 0;
}
