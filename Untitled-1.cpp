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
void printMaze();
int eX=2, eY=2;
int pX=20, pY=20;
main()
{
    system("cls");
    printMaze();
    printEnemy();
    while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            movePlayerRight();
        }
    }
        moveEnemy();
        Sleep(200); 
}void printPlayer()
{
    gotoxy(pX,pY);
    cout<<" __   ";
    gotoxy(pX,pY+1);
    cout<<"/  \\ ";
    gotoxy(pX,pY+2);
    cout<<"|__|\\/";
    gotoxy(pX,pY+3);
    cout<<" ^^   ";
}
void erasePlayer()
{
    gotoxy(pX,pY);
    cout<<"       ";
    gotoxy(pX,pY+1);
    cout<<"       ";
    gotoxy(pX,pY+2);
    cout<<"       ";
    gotoxy(pX,pY+3);
    cout<<"       ";
}
void movePlayerLeft()
{
    erasePlayer();
    pX=pY-1;
    printPlayer();
}
void movePlayerRight()
{
    erasePlayer();
    pX=pY+1;
    printPlayer();
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
void movePlayerRight()
{
    if(getCharAtxy(pX+15,pY) == ' ')
    {
        erasePlayer();
        pX=pY+1;
        printPlayer();
    }
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
    eX=eY+1;
    if(eX==30)
    {
        eX=2;
    }
    printEnemy();
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






