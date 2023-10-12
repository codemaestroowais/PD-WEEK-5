#include<iostream>
using namespace std;
void volumePyramid ()
{
    int length, width, height; float volume, centi, milli, kilo; string unit;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;
    volume=(length* width*height)/3;
    if(unit=="meters"){
        cout<<"The volume of the pyramid is: "<<volume<<" cubic meters";
    }
    if(unit=="centimeters"){
        float centi=volume*100;
        cout<<"The volume of the pyramid is: "<<centi<<" cubic centimeters";
    }
    if(unit=="millimeters"){
        float milli=centi*10;
        cout<<"The volume of the pyramid is: "<<milli<<" cubic meters";

    }
    if(unit=="kilometers"){
        float kilo=volume/1000;
        cout<<"The volume of the pyramid is: "<<kilo<<" cubic kilometers";
    }
}
    main()
    {
      volumePyramid ();  
    }

