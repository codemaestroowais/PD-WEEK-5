#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printEnemy();
void eraseEnemy();
void erasePlayer();
void printPlayer();
void movePlayerLeft();
void movePlayerRight();
void moveEnemy();
char getCharAtxy(short int x, short int y);
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printMaze();
int eX=1, eY=1;
int pX=1, pY=17;
int mX=53, mY=1;
main()
{
    system("cls");
    printMaze();
    printEnemy();
    printEnemy1();
    printPlayer();
    while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            movePlayerRight();
        }
     Sleep(200);
        moveEnemy();
        moveEnemy1();
    } 
}void printPlayer()
{
    gotoxy(pX,pY);
    cout<<" __   ";
    gotoxy(pX,pY+1);
    cout<<"/  \\  ";
    gotoxy(pX,pY+2);
    cout<<"|__|\\/";
    gotoxy(pX,pY+3);
    cout<<" ^^   ";
}
void erasePlayer()
{
    gotoxy(pX,pY);
    cout<<"      ";
    gotoxy(pX,pY+1);
    cout<<"      ";
    gotoxy(pX,pY+2);
    cout<<"      ";
    gotoxy(pX,pY+3);
    cout<<"      ";
}
void movePlayerLeft()
{
if(getCharAtxy(pX-1,pY)==' ')
    {
        erasePlayer();
        pX=pX-1;
        printPlayer();
    }
}
void movePlayerRight()
{
    if(eX==59){
        eX==1;
    }
    
if(getCharAtxy(pX+6,pY) == ' ')
    {
        erasePlayer();
        pX=pX+1;
        printPlayer();
    }
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
void printEnemy()
{
    gotoxy(eX,eY);
    cout<<"  ^^  ";
    gotoxy(eX,eY+1);
    cout<<" ---- ";
    gotoxy(eX,eY+2);
    cout<<"/    \\";
    gotoxy(eX,eY+3);
    cout<<"|____|";
    gotoxy(eX,eY+4);
    cout<<"  ^^  ";
}
void eraseEnemy()
{
    gotoxy(eX,eY);
    cout<<"      ";
    gotoxy(eX,eY+1);
    cout<<"      ";
    gotoxy(eX,eY+2);
    cout<<"      ";
    gotoxy(eX,eY+3);
    cout<<"      ";
    gotoxy(eX,eY+4);
    cout<<"      ";
}
void moveEnemy()
{
    eraseEnemy();
    eX=eX+1;
    if(eX==59)
    {
        eX=1;
    }
    printEnemy();
}
void printEnemy1()
{
    gotoxy(mX,mY);
    cout<<"  ^^  ";
    gotoxy(mX,mY+1);
    cout<<" ---- ";
    gotoxy(mX,mY+2);
    cout<<"/    \\";
    gotoxy(mX,mY+3);
    cout<<"|____|";
    gotoxy(mX,mY+4);
    cout<<"  ^^  ";
}
void eraseEnemy1()
{
    gotoxy(mX,mY);
    cout<<"      ";
    gotoxy(mX,mY+1);
    cout<<"      ";
    gotoxy(mX,mY+2);
    cout<<"      ";
    gotoxy(mX,mY+3);
    cout<<"      ";
    gotoxy(mX,mY+4);
    cout<<"      ";
}
void moveEnemy1()
{
    eraseEnemy1();
    mY=mY+1;
    if(mY==22)
    {
        mY=1;
    }
    printEnemy1();
}
void printMaze()
{
    cout<<"#################################################################"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#                                                               #"<<endl;
    cout<<"#################################################################"<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



