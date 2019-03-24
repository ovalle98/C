/*

Anotar 'Resultado' en el resultado :V 



*/



#include <iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include <math.h>

#define ARRIBA      72
#define ABAJO       80
#define IZQUIERDA   75
#define DERECHA     77
#define ENTER       13
#define VOLVER      27 //Tecla 'ESC'

#define numOpc  8
#define MAX 16

using namespace std;


void gotoxy(int x, int y)
{
     HANDLE hCon;
     COORD dwPos;
     
     dwPos.X = x;
     dwPos.Y = y;
     hCon = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hCon,dwPos);
}
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void setcursor(bool visible, DWORD size) 
{
	if(size == 0)
	{
		size = 20;	
	}
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}

char tecla;
bool DivCero=false; 
int menu(int k);
void imprimirMenu();
int SubMenu(); 

void IngresarDatos(int filas, int columnas, float A[MAX][MAX], int DistanciaHorizontal, int DistanciaVertical);
void ImprimirCorchetes(int x,int y, int DistanciaHorizontal, int DistanciaVertical, bool CorcheteIzq, bool CorcheteDer);
void ImprimirMatriz(int x,int y, float A[MAX][MAX], int DistanciaHorizontal, int DistanciaVertical);

void SumarMatrices(int a, int b, float A[MAX][MAX], float B[MAX][MAX]); 
void RestarMatrices(int a, int b, float A[MAX][MAX], float B[MAX][MAX]); 
void MultiplicarMatrices(int a, int n, int b, float A[MAX][MAX], float B[MAX][MAX]);
float Determinante2x2(float A[MAX][MAX]); 
void Determinante3x3(float A[MAX][MAX], int x, int y); 
void AlmacenarDatos2x2(int aux,int  A, float x[MAX][MAX]); 

void GaussJordan(float A[MAX][MAX], int ec, int a); 
void DividirFila(int fila, int columna, int a, float X[MAX][MAX]); 
void HacerColumnaCeros(int aux, int fila, int columna, int b, float X[MAX][MAX]); 

void GenerarMatrizIdentidad(int a, float A[MAX][MAX]); 
void UnirDosMatrices(int a, float X[MAX][MAX], float D[MAX][MAX], float E[MAX][MAX]); 
void SeccionarMatrices(int a, float D[MAX][MAX], float E[MAX][MAX]); 

	
int main(){
	system("color 0b"); 
	//system("mode con: cols=100 lines=106");
	system("mode con: cols=200 lines=200");
	
	int Opc;
	int opc2; 
	int opc3; 
	int opc4; 
	
	bool auxMA=false; //Revisa que ya se hayan introducido datos
	bool auxMB=false; //Revisa que ya se hayan introducido datos
	bool auxMC=false; //Revisa que ya se hayan introducido datos
	
	float A[MAX][MAX];
	float B[MAX][MAX]; 
	float C[MAX][MAX];
	float D[MAX][MAX];  
	float E[MAX][MAX]; 
	
	int a,b; 
	int m,n; 
	int i;
	int j;
	
	do{
		fflush(stdin);
		Opc=menu(numOpc);
		
		
		switch(Opc){
			
			case 1:{ //Agregar/Modificar datos
				
				do{
				system("cls");
				if(auxMA){ImprimirMatriz(a,b,A,4,9); } //Esto imprime la matriz A si hay datos.
				
				if(auxMB){ImprimirMatriz(m,n,B,45,9); } //Esto imprime la matriz B si hay datos.
				
				if(auxMA==false){gotoxy(11,7); cout<<"No hay datos en A";}
				if(auxMB==false){gotoxy(51,7); cout<<"No hay datos en B"; }	
				
				
				gotoxy(20,3); cout<<"Agregar/Modificar datos"<<endl;
				
				
				gotoxy(20,3); cout<<"Agregar/Modificar datos"<<endl;
				gotoxy(9,5); cout<<"[ ]Matriz A";
				gotoxy(49,5); cout<<"[ ]Matriz B";
				
				
				opc2=SubMenu(); 
				
				
				system("cls");
				setcursor(1,1); 
				gotoxy(20,3); cout<<"Agregar/Modificar datos"<<endl;
				gotoxy(9,5); cout<<"[ ]Matriz A";
				gotoxy(49,5); cout<<"[ ]Matriz B";
				
				
				switch(opc2){
					case 0:{
						
					gotoxy(9,6); cout<<"Ingresa las filas: "; 
					gotoxy(28,6); cin>>a; 
					gotoxy(9,7); cout<<"Ingresa las columnas: ";
					gotoxy(31,7); cin>>b;
					
					for(i=1;i<=9;i++){ //Esta parte se asegura de que no haya datos basura
						for(j=1;j<=9;j++){
							A[i][j]=0; 
						}
		
					}
					
					IngresarDatos(a,b,A,4,9);
					
					auxMA=true; 
						
					
						
						break;
					}
					
					case 1:{
							
					gotoxy(49,6); cout<<"Ingresa las filas: "; 
					gotoxy(68,6); cin>>m; 
					gotoxy(49,7); cout<<"Ingresa las columnas: ";
					gotoxy(71,7); cin>>n;
					
					for(i=1;i<=9;i++){  //Esta parte se asegura de que no haya datos basura
						for(j=1;j<=9;j++){
							B[i][j]=0; 
						}
		
					}
					
					
					IngresarDatos(m,n,B,45,9);
					
					auxMB=true; 
					
						
						
						break;
					}
					
					
					
					
				}
				
				}while(opc2!=2); 
				
				
				
				system("cls");
					
				Opc=menu(numOpc);
				break;
			}
			case 2:{ //Sumar 2 matrices
				system("cls");
				cout<<"Sumar 2 matrices"<<endl;
				if(auxMA==false || auxMB==false){ system("color 4F"); gotoxy(10,5);cout<<"Error! No hay datos."; system("pause>nul"); system("color 08");
				
				system("cls");
					
				Opc=menu(numOpc);
				
				}else{
				
					if(a!=m || b!=n ){system("color 4F"); gotoxy(10,5);cout<<"Error de dimensi\242n"; system("pause>nul"); system("color 08");}
					else{
					SumarMatrices(a,b,A,B); 
					
					}
				}
				system("pause>nul");
				system("cls");
					
				Opc=menu(numOpc);
				break;
			}
			case 3:{ //Restar 2 Matrices
				system("cls");
				cout<<"restar 2 matrices"<<endl;
				
				if(auxMA==false || auxMB==false){ system("color 4F"); gotoxy(10,5);cout<<"Error! No hay datos."; system("pause>nul"); system("color 08");
				
				system("cls");
					
				Opc=menu(numOpc);
				
				}else{
				
					if(a!=m || b!=n ){system("color 4F"); gotoxy(10,5);cout<<"Error de dimensi\242n"; system("pause>nul"); system("color 08");}
					else{
					RestarMatrices(a,b,A,B); 
					
					}
				}
				
				
				system("pause>nul");
				system("cls");
				Opc=menu(numOpc);
				break;
			}
			case 4:{ //Multiplicar 2 matrices
				system("cls");
				
				cout<<"Multiplicar 2 matrices"<<endl;
				
				if(auxMA==false || auxMB==false){ system("color 4F"); gotoxy(10,5);cout<<"Error! No hay datos."; system("pause>nul"); system("color 08");
				
				system("cls");
					
				Opc=menu(numOpc);
				
				}else{
				
				if(b!=m ){system("color 4F"); gotoxy(10,5);cout<<"Error de dimensi\242n"; system("pause>nul"); system("color 08");}
				else{
					MultiplicarMatrices(a,n,b,A,B);
					
				}
				}
				
				system("pause>nul");
				system("cls");
				Opc=menu(numOpc);
				break;
			}
			case 5:{ //Determinante
				system("cls");
				
				cout<<"Determinante"<<endl;
				do{
				system("cls");
				if(auxMA){ImprimirMatriz(a,b,A,5,9); } //Esto imprime la matriz A si hay datos.
				
				if(auxMB){ImprimirMatriz(m,n,B,46,9); } //Esto imprime la matriz B si hay datos.
				
				if(auxMA==false){gotoxy(11,7); cout<<"No hay datos en A"; }
				if(auxMB==false){gotoxy(51,7); cout<<"No hay datos en B"; }	
				
				
				
				gotoxy(20,3); cout<<"Determinante"<<endl;
				gotoxy(9,5); cout<<"[ ]Matriz A";
				gotoxy(49,5); cout<<"[ ]Matriz B";
				
				
				opc3=SubMenu(); 
				
				
				
				
				switch(opc3){
					case 0:{
						if(auxMA==false){gotoxy(11,7); cout<<"No hay datos en A"; system("pause>nul");}
						else{
							if(a!=b){
								gotoxy(11,8); cout<<"Error de dimensi\242"; system("pause>nul");
							}else{
								
								if(a==2){
								float Det;
								gotoxy(11,7); cout<<"Determinante 2x2"; 
								ImprimirMatriz(a,b,A,5,9); 
								Det=Determinante2x2(A);
								gotoxy(11,8); cout<<"El determinante es "<<Det;  
								
								system("pause>nul");}
								if(a==3){gotoxy(11,8); cout<<"Determinante 3x3"; 
								
								Determinante3x3(A,1,1); 
								
								system("pause>nul");}
								if(a>3){gotoxy(11,8); cout<<"Todavia no puedo hacer eso :c"; system("pause>nul");}
								}
						}
					
						break;
					}
					
					case 1:{
						if(auxMB==false){gotoxy(51,7); cout<<"No hay datos en B"; system("pause>nul");}	
						else{
							if(m!=n){
								gotoxy(11,9); cout<<"Error de dimensi\242"; system("pause>nul");
							}else{
								
								if(m==2){
								
								float Det; 
								gotoxy(51,7); cout<<"Determinante 2x2"; 
								 ImprimirMatriz(m,n,B,46,9);
								
								Det=Determinante2x2(B);
								gotoxy(51,8); cout<<"El determinante es "<<Det;  
								
								system("pause>nul");}
								if(m==3){gotoxy(51,9); cout<<"Determinante 3x3"; 
								
								Determinante3x3(B,1,1);
								
								
								system("pause>nul");
						
								}
								if(m>3){gotoxy(51,9); cout<<"Todavia no puedo hacer eso :c"; system("pause>nul");}
								}
						}
				
						break;
					}
					
					
					
					
				}
				
				}while(opc3!=2); 
				
				
				system("cls");
			
				Opc=menu(numOpc);
				break;
			}
			
			case 6:{
				system("cls");
				
				cout<<"Inversa"<<endl;
				do{
				system("cls");
				if(auxMA){ImprimirMatriz(a,b,A,5,9); } //Esto imprime la matriz A si hay datos.
				
				if(auxMB){ImprimirMatriz(m,n,B,46,9); } //Esto imprime la matriz B si hay datos.
				
				if(auxMA==false){gotoxy(11,7); cout<<"No hay datos en A"; }
				if(auxMB==false){gotoxy(51,7); cout<<"No hay datos en B"; }	
				
				
				
				gotoxy(20,3); cout<<""<<endl;
				gotoxy(9,5); cout<<"[ ]Matriz A";
				gotoxy(49,5); cout<<"[ ]Matriz B";
				
				opc3=SubMenu(); 
				
				switch(opc3){
					case 0:{
						if(auxMA==false){gotoxy(11,7); cout<<"No hay datos en A"; system("pause>nul");}
						else{
							if(a!=b){
								gotoxy(11,8); cout<<"Error de dimensi\242n"; system("pause>nul");
							}else{
								system("cls");cout<<"Inversa de A"<<endl;
								
								ImprimirMatriz(a,b,A,2,2);
								GenerarMatrizIdentidad(a,D); 
								UnirDosMatrices(a,A,D,E); 
								ImprimirMatriz(a,2*a,E,2,2*a+3); 
								
								GaussJordan(E,a,2*a); 
								
								SeccionarMatrices(a,D,E); 
								
								ImprimirMatriz(a,a,D,5*a+40,2); 
								system("pause>nul");
								}
						}
					
						break;
					}
					
					case 1:{
						if(auxMB==false){gotoxy(51,7); cout<<"No hay datos en B"; system("pause>nul");}	
						else{
							if(m!=n){
								gotoxy(11,9); cout<<"Error de dimensi\242"; system("pause>nul");
							}else{
								system("cls");cout<<"Inversa de B"<<endl;
								
								ImprimirMatriz(m,n,B,2,2); 
								GenerarMatrizIdentidad(m,D); 
								UnirDosMatrices(m,B,D,E); 
								ImprimirMatriz(m,2*m,E,2,2*m+3); 
								
								GaussJordan(E,m,2*m); 
								
								SeccionarMatrices(m,D,E); 
								
								ImprimirMatriz(m,m,D,5*m+40,2); 
								
								
								system("pause>nul");
								
								}
						}
				
						break;
					}
					
					
					
					
				}
				
				}while(opc3!=2); 
				
				
				
				system("pause>nul");
				system("cls");
			
				Opc=menu(numOpc);
				break;
				}
				
			case 7:{ //Gauss-Jordan
				
				int ec, in;
				do{
					system("cls"); 
					gotoxy(30,3); cout<<"Gauss-Jordan"<<endl;
					if(auxMC){
								ImprimirMatriz(ec,ec+1,C,1,10);
								ImprimirCorchetes(ec,ec,0,10, false, true); 
								ImprimirCorchetes(ec,1,ec*7+2,10, true, false);} //Esto imprime la matriz C si hay datos.
					gotoxy(9,5); cout<<"[ ]Agregar/Modificar Datos";
					gotoxy(49,5); cout<<"[ ]Resolver Sistema";
					
					opc4=SubMenu(); 
			
					
				
					switch(opc4){
						case 0:{
							system("cls"); 
							gotoxy(30,3); cout<<"Gauss-Jordan"<<endl;
							gotoxy(9,5); cout<<"[ ]Agregar/Modificar Datos";
							gotoxy(49,5); cout<<"[ ]Resolver Sistema";
							
							setcursor(1,1);
							gotoxy(9,7); cout<<"Cuantas ecuaciones: "; cin>>ec;
							gotoxy(9,8); cout<<"Cuantas incognitas: "; cin>>in; 
							setcursor(0,0);
							if(ec!=in){	cout<<"El sistema es incompatible! "; }
							else{
								auxMC=true; 
								gotoxy(9,9); cout<<"Ingresa los coeficientes"; 
								
								for(i=1;i<=9;i++){ //Esta parte se asegura de que no haya datos basura
									for(j=1;j<=9;j++){
										C[i][j]=0; 
									
									}
					
								}
								
								ImprimirCorchetes(ec,ec,0,10, false, true); 
								ImprimirCorchetes(ec,1,ec*7+2,10, true, false); 
								IngresarDatos(ec,ec+1,C,1,10); 
								for(i=1;i<=9;i++){ //Esta parte copia los datos de C a D
									for(j=1;j<=9;j++){
										D[i][j]=C[i][j]; 
									
									}
					
								}
								
							}
							
							
							break;
						}
						case 1:{
							if(auxMC==false){gotoxy(50,7); cout<<"No hay datos!"; }
							else{
							
							GaussJordan(D,ec,ec+1); 
							ImprimirCorchetes(ec,ec,60,10, false, true); 
							ImprimirCorchetes(ec,1,ec*7+62,10, true, false); 
							
							ImprimirMatriz(ec,ec+1,D,60,10);
							}
							system("pause>nul"); 
						
						break;
						}	
				
						
					}
						
				}while(opc4!=2); 
				
				
				system("cls");
			
				Opc=menu(numOpc);
				break;
			}
			
			
			
		}
}while(Opc!=numOpc);

return 0;
}
int menu(int k){
	int y=0;
	setcursor(0,0);

	imprimirMenu();
	do{
		
		if(kbhit()){
			
           tecla = getch();
           switch(tecla){
               case ARRIBA :{
               	y--;
               	if(y<1){
                    	y=k;} //3 es el número de opciones
				break;
			   }
                    
                    
               case ABAJO:{
               	 y++;
               	 if(y%(k+1)==0){ //4 es el número de opciones +1
               		y=1;
				   }
				break;
			   }
                      
                       
             } 
	
}

gotoxy(6,y+7);printf("*");
Sleep(1);
gotoxy(6,y+7);printf(" ");

//gotoxy(14,14);printf("%d",y);
		
	}while(tecla != ENTER);	
	
	return y;
	}
void imprimirMenu(){
		gotoxy(8,6);printf("MENU PRINCIPAL");
		 gotoxy(5,8);printf("[ ]Agregar Datos");
		 gotoxy(5,9);printf("[ ]Sumar 2 matrices");
		 gotoxy(5,10);printf("[ ]Restar 2 matrices");
		gotoxy(5,11);printf("[ ]Multiplicar 2 matrices");
		gotoxy(5,12);printf("[ ]Determinante de una matriz");
		gotoxy(5,13);printf("[ ]Inversa de una matriz");
		gotoxy(5,14);printf("[ ]Resolver un sistema de ecuaciones");
		gotoxy(5,15);printf("[ ]Salir");
		//gotoxy(5,14);printf("[ ]");printf("[ ]Inversa de una matriz");
		//gotoxy(5,15);printf("[ ]");
		
		gotoxy(8,20);cout<<"Usa las flechas para moverte";
		  gotoxy(10,21);cout<<"ENTER para seleccionar";
	}

int SubMenu(){
	
	int x=0;
	setcursor(0,0);
	
	gotoxy(9,5); cout<<"[ ]";
	gotoxy(49,5); cout<<"[ ]";

	char tecla2;
	do{
		
		if(kbhit()){
			
           tecla2 = getch();
           switch(tecla2){
               case IZQUIERDA :{
               	x--; if(x<0){x=1;} 
				break;
			   }
               case DERECHA:{
               	x++; if(x%2==0){x=0;}
				break;
			   }
               case ENTER:{
               		return x; 
				   
				break;
			   }       
                       
             } 
		}
	

	gotoxy(40*x+10,5);printf("*");
	Sleep(1);
	gotoxy(40*x+10,5);printf(" ");

  //gotoxy(14,14);printf("%d",y);
		
	}while(tecla2 != VOLVER );	
	
	if(tecla2==VOLVER){ return 2; }

}	



void IngresarDatos(int filas, int columnas, float A[MAX][MAX], int DistanciaHorizontal, int DistanciaVertical){
	tecla='\0'; 
	int y=0;
	int x=0; 
	setcursor(0,0); 
	
	
	do{
		
		if(kbhit()){
			
           tecla = getch();
           switch(tecla){
               case ARRIBA :{
               	y--;
               	if(y<1){
                    	y=filas;} //'filas' es el número de opciones
				break;
			   }
                    
                    
               case ABAJO:{
               	 y++;
               	 if(y%(filas+1)==0){ //'filas' es el número de opciones +1
               		y=1;
				   }
				break;
			   }
               
			   case IZQUIERDA :{
               	x--;
               	if(x<1){
                    	x=columnas;} //'columnas' es el número de opciones
				break;
			   }
                    
                    
               case DERECHA:{
               	 x++;
               	 if(x%(columnas+1)==0){ //'columnas' es el número de opciones +1
               		x=1;
				   }
				break;
			   }
			   case ENTER:{
			   	
				gotoxy(7*x+DistanciaHorizontal,2*y+DistanciaVertical);printf("[");
				gotoxy(7*x+DistanciaHorizontal+4,2*y+DistanciaVertical);printf("]");
			   	
				setcursor(1,1);
				gotoxy(7*x+DistanciaHorizontal+2,2*y+DistanciaVertical); 
				cin>>A[y][x];
				setcursor(0,0);
				
				break;
			   }       
                       
             } 
	
}

gotoxy(7*x+DistanciaHorizontal,2*y+DistanciaVertical);printf("[");
gotoxy(7*x+DistanciaHorizontal+4,2*y+DistanciaVertical);printf("]");
Sleep(30);
gotoxy(7*x+DistanciaHorizontal,2*y+DistanciaVertical);printf(" ");
gotoxy(7*x+DistanciaHorizontal+4,2*y+DistanciaVertical);printf(" ");


//gotoxy(20,20);printf("(%d,%d)",y,x);

	ImprimirMatriz(filas,columnas,A,DistanciaHorizontal,DistanciaVertical); 
		
	}while(tecla != VOLVER);	
	
}

void ImprimirMatriz(int x,int y,float A[MAX][MAX], int DistanciaHorizontal, int DistanciaVertical){	
	int i,j;
	
	ImprimirCorchetes(x,y,DistanciaHorizontal,DistanciaVertical, true, true);
	
	for(i=1;i<=y;i++){
		for(j=1;j<=x;j++){
			gotoxy(7*i+DistanciaHorizontal+2,2*j+DistanciaVertical); cout<<A[j][i]; 
		}
		
	}
	
}


void ImprimirCorchetes(int x,int y, int DistanciaHorizontal, int DistanciaVertical, bool CorcheteIzq, bool CorcheteDer){
	
	int i;
	if(CorcheteIzq){
	
	gotoxy(DistanciaHorizontal+5,DistanciaVertical+1); cout<<"\311";
	
	
		for(i=1;i<=(2*x-1);i++){
		
		gotoxy(DistanciaHorizontal+5,DistanciaVertical+1+i);cout<<"\272";
		
		}
	
	gotoxy(DistanciaHorizontal+5,DistanciaVertical+1+i); cout<<"\310";
	}
//---------------------------------------------
	if(CorcheteDer){
	
	gotoxy(7*y+DistanciaHorizontal+6,DistanciaVertical+1); cout<<"\273";
		
		for(i=1;i<=(2*x-1);i++){
		
		gotoxy(7*y+DistanciaHorizontal+6,DistanciaVertical+1+i);cout<<"\272";
		
		}
	
	gotoxy(7*y+DistanciaHorizontal+6,DistanciaVertical+1+i); cout<<"\274";
}
}

void SumarMatrices(int a, int b, float A[MAX][MAX], float B[MAX][MAX]){
	float X[MAX][MAX]; 
	int i,j; 

	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			X[i][j]=A[i][j]+B[i][j]; 
		}
	}
	
	ImprimirMatriz(a,b,A,4,9); 
	
	ImprimirMatriz(a,b,B,45,9);
	
	ImprimirMatriz(a,b,X,20,20); 

}

void RestarMatrices(int a, int b, float A[MAX][MAX], float B[MAX][MAX]){
	float X[MAX][MAX]; 
	int i,j; 

	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			X[i][j]=A[i][j]-B[i][j]; 
		}
	}
	
	ImprimirMatriz(a,b,A,4,9); 
	
	ImprimirMatriz(a,b,B,45,9);
	
	ImprimirMatriz(a,b,X,20,20); 
}

void MultiplicarMatrices(int a, int n, int b, float A[MAX][MAX], float B[MAX][MAX]){
	float X[MAX][MAX]; 
	int i,j,k,l; 
	
	
	/* Esto es sólo una nota para A[2][3] y B[3][2] :v
	X[1][1]= A[1][1]*B[1][1]
			+A[1][2]*B[2][1]
			+A[1][3]*B[3][1];
			
	X[1][2]= A[1][1]*B[1][2]
		    +A[1][2]*B[2][2]
			+A[1][3]*B[3][2];
			 
	X[2][1]= A[2][1]*B[1][1]
			+A[2][2]*B[2][1]
			+A[2][3]*B[3][1];
			
	X[2][2]= A[2][1]*B[1][2]	
			+A[2][2]*B[2][2]
			+A[2][3]*B[3][2]; 
	*/
	
	
	for(i=1;i<=a;i++){
		for(j=1;j<=n;j++){
			X[i][j]=0;
			printf("X[%d][%d]= ",i,j);
			for(k=1;k<=b;k++){
				X[i][j]=(X[i][j]+(A[i][k]*B[k][j]));
				printf("(%.1f*%.1f)+",A[i][k],B[k][j]);
			
			}
			printf("\b \n"); 
		}
	}
	
	
	
	ImprimirMatriz(a,n,X,20,20); 
}

float Determinante2x2(float A[MAX][MAX]){
	float Det; 
	
	Det=(A[1][1]*A[2][2])-(A[1][2]*A[2][1]);
	
	return Det;
}

void Determinante3x3(float A[MAX][MAX], int x, int y){
	float Det=0;
	int filas,columnas,k;
	float X[MAX][MAX]; 
	float aux,aux2; 
	system("cls"); 
	
	ImprimirMatriz(3,3,A,5,5); 
	
	for(k=1;k<=3;k++){
		aux=0; 
		
		
		for(filas=1;filas<=3;filas++){
			for(columnas=1;columnas<=3;columnas++){
				if(columnas==k || filas==1){continue;}
				//gotoxy(2*columnas+10*k,2*filas); cout<<A[filas][columnas];
				aux++;
				AlmacenarDatos2x2(aux,A[filas][columnas],X);
			}
			
			
		
		}
	
	aux2=Determinante2x2(X); 
	
	Det=Det+(pow(-1,k+1))*A[1][k]*aux2;
	
	
	gotoxy(3+(k-1)*25,19);printf("[%.1f]x",A[1][k]);

	ImprimirMatriz(2,2,X,25*(k-1)+4,15); 
	
	gotoxy(3+(k-1)*25,23);printf("[%.1f]x",A[1][k]);
	gotoxy(9+(k-1)*25,23); printf("[%.1f]",aux2);
	
	}
	gotoxy(19,23);cout<<"-"; 
	gotoxy(43,23);cout<<"+"; 
	
	gotoxy(65,23);cout<<"= "<<Det;
	gotoxy(x,y); cout<<"El determinante es "<<Det; 
}

void AlmacenarDatos2x2(int aux,int  A, float x[MAX][MAX]){
	
	switch(aux){
		case 1:
			x[1][1]=A;
		break;
		case 2:
			x[1][2]=A;
		break;	
		case 3:
			x[2][1]=A;
		break;
		case 4:
			x[2][2]=A;
		break;
		default:
			return ;
			break;
	}
}

void GaussJordan(float A[MAX][MAX], int a, int b){
	int i,j; 
	for(i=1;i<=a;i++){
		
		gotoxy(5,17+a+(i-1)*(5*a+4)); printf("\304\304\304 R(%d) = R(%d)/%.2f \304\304\304>",i,i,A[i][i]); //Esto es para imprimir la instrucción
		DividirFila(i,i,b,A);
		if(DivCero==true){gotoxy(50,7); cout<<"Error! Divisi\242n entre 0."; break;}
		ImprimirMatriz(a,b,A,3,17+a+(i-1)*(5*a+4)); 
		 
		for(j=1;j<=a;j++){
			if(i==j){continue;}else{
			
			gotoxy(5,15+j+a+3*a+(i-1)*(5*a+4)); printf("\304\304\304 R(%d)=(-1)x(%.2f)xR(%d)+R(%d) \304\304\304>",j,A[j][i],i,j);
			HacerColumnaCeros(i,j,i,b,A); 
			}
		}
		
	
		ImprimirMatriz(a,b,A,3,18+a+3*a+(i-1)*(5*a+4));
	}
	
}

void DividirFila(int fila, int columna, int a, float X[MAX][MAX]){
	int i; 
	float aux; 
	aux=X[fila][columna]; 	
	DivCero=false; 
	if(X[fila][fila]==0){DivCero=true; return; } 	
	else{
		for(i=1;i<=a;i++){
			
			X[fila][i]=X[fila][i]/aux; 
			
		}
		
	}
	
}

void HacerColumnaCeros(int aux, int fila, int columna, int b, float X[MAX][MAX]){
	int i; 
	float constante; 
	constante=X[fila][columna]; 
	
	for(i=1;i<=b;i++){
		X[fila][i]=(-1)*constante*X[aux][i]+X[fila][i]; 
	}
	
}

void GenerarMatrizIdentidad(int a, float A[MAX][MAX]){
	int i, j; 
	
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
		if(i==j){A[i][j]=1;}
			else{A[i][j]=0;}	
		}
	}
}

void UnirDosMatrices(int a, float X[MAX][MAX], float D[MAX][MAX], float E[MAX][MAX]){
	int i,j,k,l; 
	k=1;
	l=1;
	for(i=1;i<=a;i++){
		for(j=1;j<=2*a;j++){
			E[i][j]=0;  
		}
	}
	
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			E[i][j]=X[i][j]; 
		}
	}
	
	for(k=1;k<=a;k++){
			i=1;
		for(l=j;l<=2*a;l++){
			E[k][l]=D[k][i];  
			i++;
		}
	}
	
}

void SeccionarMatrices(int a, float D[MAX][MAX], float E[MAX][MAX]){
	int i,j,k,l; 
	
	
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
		}
	}
	
	for(k=1;k<=a;k++){
			i=1;
		for(l=j;l<=2*a;l++){
			D[k][i]=E[k][l];  
			i++;
		}
	}
	
}
