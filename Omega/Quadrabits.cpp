#include <bits/stdc++.h>
using namespace std;

long decimal(string b) {
    long n = 0;
    int j = 0;
    for (int i=b.size()-1; i>-1; i--) {
        if(b[i] == '1')
          n += pow(2, j);
        j++;
    }
    return n;
}

int main() {
    string q;
    int n, o, k;
    cin>>q;
    long d = decimal(q);
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>o;
        cin>>k;
        if(o == 1)
            d >>= k;
        else
            d <<= k;
    }
    cout<<d<<endl;
    return 0;
}
