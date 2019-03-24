#include <bits/stdc++.h>

using namespace std;

#define tam 10000000
bool A[tam];

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    A[0] = 1;
    A[1] = 1;
    for (int i = 2; i < sqrt(tam); i++) {
        if(A[i] == 0) {
            for (int j = i; j <= (tam / i); j++) {
                A[i*j] = 1;
            }
        }
    }
    int cont = 1;
    for (long int i = 2; i < tam; i++) {
        if(A[i] == 0) {
            if(cont == n) {
                cout << i << endl;
                break;
            }
            cont++;
        }
    }

    return 0;
}
