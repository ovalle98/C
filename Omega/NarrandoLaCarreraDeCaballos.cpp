#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  int x, y, aux;
  int v1=0, v2=0;
  int mayor=0;
  int estado[3];
  //estado[0] = ganando caballo1
  //estado[1] = ganando caballo1
  //estado[2] = empate;
  estado[0]=0;
  estado[1]=0;
  estado[2]=1;
  cin>>T;

  for(int i=1; i<=T; i++){
    cin>>x>>y;
    v1 += x;
    v2 += y;
    aux = sqrt(pow((v1-v2),2));

    if(aux>mayor)
      mayor=aux;

    if((v1>v2) && (estado[0]==0)){
      estado[0]=1;
      estado[1]=0;
      estado[2]=0;
      cout<<"Al minuto "<<i<<" el caballo 1 toma la delantera"<<endl;
    }
    else if((v1>v2) && (estado[0]==1)){
    }
    else if((v1<v2) && (estado[1]==0)){
      estado[0]=0;
      estado[1]=1;
      estado[2]=0;
      cout<<"Al minuto "<<i<<" el caballo 2 toma la delantera"<<endl;
    }
    else if((v1<v2) && (estado[1]==1)){
    }
    else if((v1==v2) && (estado[2]==0)){
      estado[0]=0;
      estado[1]=0;
      estado[2]=1;
      cout<<"Al minuto "<<i<<" los caballos van empatados"<<endl;
    }
  }

  if(v1 > v2){
    cout<<"Termina la carrera y gana el caballo 1"<<endl;
    cout<<"La distancia maxima entre los caballos fue de "<<mayor<<endl;
  }
  else if( v1 < v2){
    cout<<"Termina la carrera y gana el caballo 2"<<endl;
    cout<<"La distancia maxima entre los caballos fue de "<<mayor<<endl;
  }
  else if(v1 == v2){
    cout<<"Termina la carrera y empatan los caballos"<<endl;
    cout<<"La distancia maxima entre los caballos fue de "<<mayor<<endl;
  }
  return 0;
}
