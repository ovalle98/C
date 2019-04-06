#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n, a, x, y;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a;
        switch (a) {
            case 1:
                cin>>x;
                cout<<abs(x)<<endl;
                break;
            case 2:
                cin>>x>>y;
                cout<<max(x, y)<<;
                break;
            case 3:
                cin>>x>>y;
                cout<<min(x, y)<<endl;
                break;
            case 4: // sqrt 1
                cin>>x;
                printf("%0.2lf\n", sqrt(x));
                break;
            case 5: // potencia 2
                cin>>x>>y;
                int64_t res = pow(x, y);
                cout<<res<<endl;
        }
    }
    return 0;
}
