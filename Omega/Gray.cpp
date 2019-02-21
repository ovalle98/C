#include <bits/stdc++.h>

using namespace std;

string binario(int n){
   string m="";
   while(n != 0){
     long int aux = n%2;
     m = to_string(aux)+m;
     n=n/2;
   }
   return m;
}

string Gray (string binario){
    string gray = "";
    gray = binario[0];
    for (int i = 0; i < binario.length()-1; i++)
      if(binario[i] == binario[i+1])
        gray+="0";
      else
        gray+="1";
    return gray;
}

long int decimal(string gray){
    long int n = 0;
    long int tam = gray.length();
    for (int i = 0; i <=tam; i++)
      if(gray[i] == '1')
        n += pow(2,tam-i-1);
    return n;
}

int main(int argc, char const *argv[]) {
  long int n,d;
  cin>>n;
  if(n != 0)
    d = decimal(Gray(binario(n)));
  else
    d=0;
  cout<<d<<endl;
  return 0;
}
