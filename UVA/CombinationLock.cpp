#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin>>n1>>n2>>n3>>n4;

    while (n1 || n2 || n3 || n4)
    {
      cout<<1080 + ((n1-n2+40)%40 + (n3-n2+40)%40 + (n3-n4+40)%40)*9<<endl;
      cin>>n1>>n2>>n3>>n4;
    }
}
