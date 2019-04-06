#include <bits/stdc++.h>

using namespace std;

long gcd(long a, long b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    long a, b;
    cin >> a >> b;
    cout<< gcd(a, b) << endl;
    return 0;
}
