#include <iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;
    if(n>=8){
        cout<<"NO CAFE"<<endl;
    }else{
        n=(8-n)*1.5;
        cout<<n<<endl;
    }
    return 0;
}
