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
void movePlayerUp();
void movePlayerDown();
void moveEnemy();
char getCharAtxy(short int x, short int y);
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void printMaze();
int eX=1, eY=1;
int pX=2, pY=18;
int mX=56, mY=6;
int nX=1, nY=6;
main()
{
    system("cls");
    printMaze();
    printPlayer();
    printEnemy();
    printEnemy1();
    
    
    while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        if(GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
        moveEnemy();
        moveEnemy1();
         
        Sleep(300);
        
       
        
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
    cout<<" ^^    ";
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
    if(getCharAtxy(pX+10, pY)==' ')
    {erasePlayer();
    pX++;
    printPlayer();
    }

}    
    
void movePlayerUp()
{   
    if(getCharAtxy(pX, pY-1)==' ')
   {  
    erasePlayer();
    pY=pY-1;
    printPlayer();
   }
}
    
    
void movePlayerDown()
{   if(getCharAtxy(pX , pY+5)==' ')
     {
     erasePlayer();
    pY=pY+1;
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
    if(mY==19)
    {
        mY=6;
    }
    printEnemy1();
}
void printEnemy2()
{
    gotoxy(nX,nY);
    cout<<"  ^^  ";
    gotoxy(nX,nY+1);
    cout<<" ---- ";
    gotoxy(nX,nY+2);
    cout<<"/    \\";
    gotoxy(nX,nY+3);
    cout<<"|____|";
    gotoxy(nX,nY+4);
    cout<<"  ^^  ";
}
void eraseEnemy2()
{
    gotoxy(nX,nY);
    cout<<"      ";
    gotoxy(nX,nY+1);
    cout<<"      ";
    gotoxy(nX,nY+2);
    cout<<"      ";
    gotoxy(nX,nY+3);
    cout<<"      ";
    gotoxy(nX,nY+4);
    cout<<"      ";
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



