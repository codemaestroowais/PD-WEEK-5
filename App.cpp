#include<iostream>
#include<conio.h>
using namespace std;
void header();
int menu();
void patientdetail();
void doctordetail();
void equipmentdetail();
main(){
    int option;
    system("cls");
    while(true)
    {header();
    option = menu();
    if(option==1)
    {
         patientdetail();
    }
     if(option==2)
    {
     equipmentdetail();  
    }
     if(option==3)
    {
        doctordetail();
    }
     if(option==4)
    {
        
    }
     if(option==5)
    {
     return 0;   
    }
     cout<<"Press any key to continue..."<<endl;
     getch();
     system("cls");

    }
}

void header()
{
    cout<<endl<<endl;
    cout<<"###############################################################################################################"<<endl<<endl;
    cout<<"    88      88 88888888 888888    88888      8     8   8888   8888888  88      88   8888  88    8 8     8    "<<endl;
    cout<<"    8 8    8 8  8        8    88    8        8     8 88    88 8      8 8 8    8 8  8    8 8 8   8  8   8     "<<endl;
    cout<<"    8  8  8  8  88888    8     88   8        8888888 88888888 8888888  8  8  8  8  8    8 8  8  8   888    "<<endl;
    cout<<"    8   88   8  8        8    88    8        8     8 88    88 8    8   8   88   8  8    8 8   8 8    8    "<<endl;
    cout<<"    8        8 88888888 888888    88888      8     8 88    88 8     8  8        8   8888  8    88    8      "<<endl;
    cout<<"################################################################################################################ "<<endl;
    cout<<"                                                                "<<endl;
}
int menu()
{
int option;
 cout<<"Select one of the following option..."<<endl;
 cout<<"1. Enter 1 to see patient's details."<<endl;
 cout<<"2. Enter 2 to see equipment's details."<<endl;
 cout<<"3. Enter 3 to see doctor's management."<<endl;
 cout<<"4. Enter 4 to see billing and payments."<<endl;
 cout<<"5. Exit."<<endl;
 cout<<"Enter your option..... ";
 cin>>option;
 return option;
}
void patientdetail()
{
    
      cout<<"a. Add new Patient."<<endl;
      cout<<"b. Search Patient. "<<endl;
      cout<<"c. View patient records."<<endl;  
    
}
void doctordetail()
{
    
      cout<<"a. Add new Doctor. "<<endl;
      cout<<"b. Search Doctor"<<endl;
      cout<<"c. View Doctor."<<endl;  
    
}
void equipmentdetail()
{
    cout<<"a. Equipment name."<<endl;
    cout<<"b. Equipment serial number."<<endl;
    cout<<"c. Add new equipment."<<endl;

}
