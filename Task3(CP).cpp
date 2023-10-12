#include<iostream>
using namespace std;
void taxCalculator()
 {
       char type;
        float price;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    if(type=='M'){
        float tax=(price*6)/100;
        float finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalPrice<<".";

    }
    if(type=='E'){
        float tax=(price*8)/100;
        float finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalPrice<<".";
    }
    if(type=='S'){
        float tax=(price*10)/100;
        float finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalPrice<<".";
    }
    if(type=='V'){
        float tax=(price*12)/100;
        float finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalPrice<<".";
    }
    if(type=='T'){
        float tax=(price*15)/100;
        float finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalPrice<<".";
    }
}
main(){
    taxCalculator();
}