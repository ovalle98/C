#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    char event;
    string name;
    cin >> n;
    stack <string> motherNames;

    for (int i = 0; i < n; i++) {
        cin >> event;
        if(event == 'F') {
            cin >> name;
            motherNames.push(name);
        }
        else {
            cin >> name;
            cout << name << " " << motherNames.top() << endl;
            motherNames.pop();
        }
    }

    return 0;
}
