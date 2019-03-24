#include <iostream>


int main(){
  char n[3];
  int64_t c=0;
  while((scanf("%c",n)) != EOF ){
    if(n[0] == 'o') c += 1;
    if(n[1] == 'o') c += 1;
    if(n[2] == 'o') c += 1;
  }
  printf("%i",c);
}
