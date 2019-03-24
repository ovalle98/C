#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    string abcdario;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> abcdario;
        set<char> letras;
        for (unsigned int j = 0; j < abcdario.size(); j++) letras.insert(abcdario[j]);
        	if(letras.size() == 26) cout << "PERFECT\n";
        	else cout << "NO WAY\n";
    }
    return 0;
}
