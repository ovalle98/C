#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t n;
    long double t, p;
    long double pr, s = 0;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>t>>p;
        if(t == 0 || p == 0) p = 10;
        s += p;
    }

    pr = s / n;
    cout<<pr<<endl;
    return 0;
}
