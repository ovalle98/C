#include <bits/stdc++.h>
using namespace std;
uint64_t BinarioADecimal(string x){
	
	uint64_t n=0;
	for(int i = x.size()-1; i>=0 ; i--){
		if(x[i] == '1') n = n+(uint64_t)pow(2,x.size()-1-i);
	}
	return n;
}

int main(){
string c;
cin>>c;
cout<<(uint64_t)BinarioADecimal(c)<<endl;
return 0;
}
