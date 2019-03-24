#include <iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include <math.h>
#define MAX 74
using namespace std;
//Funcion Gotoxy

void gotoxy(int x, int y)
{
     HANDLE hCon;
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y = y;
     hCon = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hCon,dwPos);
}
//VARIABLES
int Q;
int aux;
bool Ver;
int c;
int NumMin;
int ImpPos;
int NumImplicantes[MAX];
int TotalMinterminos[MAX];
int AuxA[100];
//Funciones
bool comparar(char m[MAX], char n[MAX],int N,int P );
int Convertir(char C[MAX], int A[MAX]); 
void imprimirTabla(int n, int s[MAX]); 
void ordenar (int tam, int arreglo[]); 
void imprimir(int n, int s[MAX]); 
int numeroBinario(int i); 
int calcularVariables(int A);
int ContarUnos(char Mintermino[MAX]);
void QuineMcCluskey(int k,int Contador,int P);
void DefFuncion(char ImplicantesPrimos[MAX]);
void EliminarRepetidos(int k,int P);
void EliminarNoUtiles(int K,int P);

//Estructuras
struct Datos
{
	int NumUnos[MAX];
	char Binario[MAX];
	int Mintermino[MAX];
	int Rep;
	int Parecidos;
};

struct Tablas
{
	Datos McCluskey[MAX];
};
//declaracion de lo que hace todo jajaj a 
Tablas Tabla[MAX];
Tablas Implicantes;
Tablas ImplicantesR;
int main(){
	
	system("mode con: cols=100 lines=200");
	
	int i,k,N,o; 
	char  C[100]; 
	int A[100]; 
	//Pido y Resivo Minterminos
	
	
	
	
	cout<<"Ingrese los minterminos(m): "; 
	cin>>C;
	
	
	
	
	k=Convertir(C,A); 
	NumMin=k;

	
	N=calcularVariables(A[k-1]);
	
	
	imprimirTabla(N,A); 
	
 
	
	//aux=k;
	
	
	
	
	
	for(int g;g<=NumMin-1;g++)
	{
		AuxA[g]=A[g];
	}
	 	
	//ordenar(k,A); 
	imprimir(N,A);
	
	QuineMcCluskey(k-1,0,0);
	
	
		
}
//Compara
bool comparar(char m[MAX], char n[MAX],int N,int P){
	int i; 
	char aux[MAX];
	for(i=0; i<strlen(m);i++)
	{
		aux[i]=m[i];	
	}
	
	
	for(i=0; i<strlen(aux);i++)
	{
		if(aux[i]!=n[i])
		{
			c++;
		}
		
	}
	//cout<<c;
	//system("pause>nul");
	if(c==1)
	{
		i=0;
		for(i=0; i<strlen(m);i++)
		{
			if(aux[i]!=n[i])
			{
				aux[i] = 'X'; 
			}
		
		}
	
	    //Aqui va el if
	
		Tabla[P+1].McCluskey[Q].NumUnos[P+1]=ContarUnos(aux);
	    strcpy(Tabla[P+1].McCluskey[Q].Binario,aux);
	    Tabla[P+1].McCluskey[Q].Mintermino[P+1]=N;
		Tabla[P+1].McCluskey[Q].Parecidos++;	
	    Q++;
	    
	     //Q=0;
	     c=0;
	    return true;
	   
	}
	else
	{
		//	Q=0;
		c=0;
		return false;
	
	}
	if(Tabla[P].McCluskey[Q].Parecidos==0){
		
		for(i=0; i<strlen(m);i++)
		{
			if(aux[i]!=n[i])
			{
				aux[i] = 'X'; 
			}
		
		}
		
		
		Implicantes.McCluskey[ImpPos].NumUnos[P+1]=ContarUnos(aux);
	    strcpy(Implicantes.McCluskey[Q].Binario,aux);
	    Implicantes.McCluskey[ImpPos ].Mintermino[P+1]=N;
	    ImpPos++;
	}
	
}
//Convierte la cadena a enteros
int Convertir(char C[MAX], int A[MAX]){
	char aux[1000]; 
	int i,j=0,k=0,r=0; 
	
	for(i=0; i<strlen(C);i++){
		switch(C[i]){
		case ',':{
		
		
		j=0;
		A[k] = atoi(aux);
		k++;  	
			  for(r=0; r<MAX;r++){
				aux[r] = '\0'; 
			    }
			
		break;
	       }
		case '.': {
		     j=0;
			A[k] = atoi(aux);
			k++;  
			
			for(r=0; r<MAX;r++){
				aux[r] = '\0'; 
		    	}
			
		    break; 
	        } 
	        
		default:{
			
		
			aux[j] = C[i]; 
			j++; 
			
		break;
         	   }
	    	}
			
	}
	i=0;
	
	
	return k; 
}

//Variables
int calcularVariables(int n)
 {
	int numVariables=0;
	for(unsigned int i=0;i<=10;i++)
	{
		if(n+1<=pow(2,i) && n+1>pow(2,i-1))    //*(minter+0)=minter[0]
		{
			return i;
		}	
	}
}
//Funcion Imprimir
void imprimirTabla(int n, int s[MAX])
{
	
	aux=n;
	int m=pow(2,n); 
	int ab;
	  
	int A[n][m]; 
	int l,i,j,k,NumU; 
	int contador=0; 
	
	char c[100]; 	
	char noVariables[100] = " %."; 
	char hue[100];
	sprintf(hue,"%d",n); 
	strcat(noVariables,hue); 
	strcat(noVariables,"d"); 
	
	for(i=0;i<m;i++){
		
		for(j=0;j<=n;j++){
		
			k=numeroBinario(i); 
			
				sprintf(c,noVariables,k);
				if(i == s[contador]){
			//Se guardan los datos
			NumU=ContarUnos(c);
		Tabla[0].McCluskey[contador].NumUnos[0]=NumU;
		strcpy(Tabla[0].McCluskey[contador].Binario,c);
		Tabla[0].McCluskey[contador].Mintermino[0]=s[contador];
		
				
				//cout<<"1";
				 contador++;
			}
		//gotoxy(20+j*4,5+i); cout<<i<<" "<<c[j+1];      
		
	//	 c=Binario   NumU=Numero de unos  s[m] MIntermino 
		
		}
		//gotoxy(14+j*4,5+i); printf("%c",186);
		//gotoxy((j*4),5+i); printf("%d %c",i,186);
	}
	cin>>ab;
}
//Imprime la tabla
void imprimir(int n, int s[MAX])
{
	
	aux=n;
	int m=pow(2,n); 
	
	  
	int A[n][m]; 
	int l,i,j,k,NumU; 
	int contador=0; 
	
	char c[100]; 	
	char noVariables[100] = " %."; 
	char hue[100];
	sprintf(hue,"%d",n); 
	strcat(noVariables,hue); 
	strcat(noVariables,"d"); 
	
	for(i=0;i<m;i++){
		
		for(j=0;j<=n;j++){
		k=numeroBinario(i); 
			if(i == s[contador]){
				gotoxy(23+4*n,10+i*2);
				cout<<"1"; contador++;
			}
			
				sprintf(c,noVariables,k);
				gotoxy(20+j*4,10+i*2); cout<<c[j+1];  
		   
		gotoxy(13,10+i*2); printf("%2d",i);
		
		}
		
	}
	for(int k=0;k<12+4*n;k++){
		gotoxy(13+k,9); cout<<"\315"; 
	}
		
	
		gotoxy(14,8); cout<<"m \272";
		gotoxy(14,9); cout<<"\315\315\316";
		gotoxy(21+4*n,8); cout<<"\272 S";
		gotoxy(21+4*n,9); cout<<"\316";
		
		
	for(int k=0; k<i*2;k++){
		gotoxy(16,10+k); cout<<"\272";
		gotoxy(21+4*n,10+k); cout<<"\272";
		
	}
	
	for(int k=0;k<n;k++){
		gotoxy(20+4*k,8); printf("%c",65+k); 
	}
}
//ordena los minterminos menor-mayor

void ordenar (int tam, int arreglo[]){
   int i, j, temporal;
 	string aux; 
   for (i = tam - 1; i > 0; i--)
      for (j = 0; j < i; j++)
         if (arreglo[j] > arreglo[j + 1]) {
            temporal = arreglo[j];
            arreglo[j] = arreglo[j + 1];
            arreglo[j + 1] = temporal;
            
         }
}


//Combierte los minterminos a binario 
int numeroBinario(int i){
	int binario = 0; 
	int pos = 1; 
	
	while(i>0){
		binario = binario + (i%2)*pos;
		i/=2;
		pos *= 10; 
		
	}
	
	return binario; 
	
	
	
}
//Contar Unos
int ContarUnos(char Mintermino[MAX]){
	int Contador=0;
	for(int i=0;i<=strlen(Mintermino);i++){
		if(Mintermino[i]=='1'){
			Contador++;
		}
	}
	return Contador;
} 


void QuineMcCluskey(int k,int Contador,int P){
int i,j;
Q=0;

	
	for(i=0;i<=k;i++){
	
     for(j=0;j<=k;j++){
     	//condicion pa todo
     	//cout<<Tabla[P].McCluskey[i].NumUnos[P]<<"   "<<Tabla[P].McCluskey[j].NumUnos[P]<<endl;
     	
	if(Tabla[P].McCluskey[i].NumUnos[P]+1==Tabla[P].McCluskey[j].NumUnos[P]){
		//cout<<"ENTRO"<<endl;
     	//system("pause>nul");
		//
		//cout<<Tabla[P].McCluskey[i].Binario;
		Ver=comparar(Tabla[P].McCluskey[i].Binario,Tabla[P].McCluskey[j].Binario,Tabla[P].McCluskey[j].Mintermino[P],P);
		//cout<<Tabla[P].McCluskey[i].Binario<<"   "<<Tabla[P].McCluskey[j].Binario<<"   "<<Ver<<endl;
		//system("pause>nul");
		if(Ver==true){
			Contador++;
		}
		
			    
	}
	
		}
	}
	

	
	//cout<<Contador<<endl;
	//system("pause>nul");
	
	NumImplicantes[P]=Q;
		if(Contador==0){
			
	//	goto a;
	char Mac[MAX]="Resultado";
	strcpy(Tabla[P].McCluskey[NumImplicantes[P-1]].Binario,Mac);
	
	gotoxy(2,1); 
	cout<<Tabla[P].McCluskey[NumImplicantes[P-1]].Binario<<endl<<endl;
	
	
	
	EliminarRepetidos(k,P);
	EliminarNoUtiles(k,P);
	
		for(int i=0;i<=ImpPos-2;i++){
			
					
			if(i==ImpPos-2){
			DefFuncion(Implicantes.McCluskey[i].Binario);
			}else{
			DefFuncion(Implicantes.McCluskey[i].Binario);
			cout<<"+";	
			}
			//cout<<"X = "<<Tabla[Tam].McCluskey[i].NumUnos[0]<<endl;
			//cout<<"Y = "<<Tabla[P].McCluskey[0].Binario<<endl;
			//printf("%c",Tabla[P].McCluskey[i].Binario);
			//cout<<"Z1 = "<<Tabla[Tam].McCluskey[i].Mintermino[0]<<endl;
			
			
			
			}
	
		exit(-1);
		}
		
		Q=0;
	QuineMcCluskey(k,0,P+1);
	//a:
	//Mostrar();

	
}





void DefFuncion(char ImplicantesPrimos[MAX])
{
	//cout<<aux;
	//system("pause>nul");
	int n = aux;
//cout<<"HOLA ENTYRO AL FER";
//cout<<ImplicantesPrimos<<"   ";

	for (int i = 0; i <= n; i++)
	{
		switch(ImplicantesPrimos[i])
		{
			case 'x':
			{
				break;
				
			}
			case '1':
			{
				printf("%c", 64 + i);
				break;
			}
			case '0':
			{
				printf("%c%c", 64 + i, 39);
				break;
			}
		} 
	}
	//cout<<endl;
}


void EliminarRepetidos(int k,int P){
	

	
	
	
	
	int contador;
	for(int i=0;i<=k;i++)
	{
	
     	//for(int j=0;j<=k;j++)
		 //{
     		
     		for(int m=0;m<=aux-1;m++)
     		{
     			
     			if(Tabla[P].McCluskey[i].Binario[m]==Tabla[P].McCluskey[1+i].Binario[m])
				 {
     				contador++;
     				
				 }

			}
			
			
			
     				if(contador!=aux&&Tabla[P].McCluskey[i].Rep==0)
				 	{
				 	//cout<<contador<<"   "<<Tabla[P].McCluskey[i].Rep<<ImpPos<<endl;
				 	strcpy(Implicantes.McCluskey[ImpPos].Binario,Tabla[P].McCluskey[i].Binario);
				 	Tabla[P].McCluskey[i].Rep++;
				 	ImpPos++;
				 	}
     		contador=0;
     //	 }
     	 
 	}
}
void EliminarNoUtiles(int k,int P){
	
	
	int contador;
	for(int i=0;i<=k;i++)
	{
	
     	//for(int j=0;j<=k;j++)
		 //{
     		
     		for(int m=0;m<=	NumMin-1;m++)
     		{
			 
     			
				 
     			if(Tabla[P].McCluskey[i].Mintermino[m]==Tabla[P].McCluskey[1+i].Binario[m])
				 {
     				contador++;
     				
				 }

			}
			
			
			
     	
     //	 }
     }
     
 	}
 	
 	




