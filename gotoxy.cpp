#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y)
{
	HANDLE hCon;
	COORD dwPos;
	
	dwPos.X=x;
	dwPos.Y=y;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}

int main()
{
	int q;
	int e,d;
	int ad[8];
	int x=4, y=4;
	
	for(int i=0;i<8;i++)
	{
		ad[i]=i+1;
	}
	int c=0;
	for(int i=0;i<8;i++)
	{
		if(c>3)
		{
			c=0;
			x=x+x;
			y=4;
		}
		gotoxy(x,y);cout<<ad[i];
	//	x++;
		y++;
		c=c+1;
		gotoxy(0,0);cout<<c;
		gotoxy(20,0);cin>>q;
	}
		
	
	cin>>q;
	return 0;
}
