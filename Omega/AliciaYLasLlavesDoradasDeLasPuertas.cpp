#include <iostream>
int vec[1000000];
using namespace std;
int main() {
	int n, x;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>x;
		vec[x] = i;
	}
	cin>>n;
	for(int i=0; i<n; i++){
		 cin>>x;
		 cout<<vec[x]<<" ";
	}
	cout<<endl;
	return 0;
}
