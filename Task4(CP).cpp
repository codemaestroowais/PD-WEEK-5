#include<iostream>
using namespace std;
void projectTimecalculation ()
{
    int hoursneeded, days, workers;
    cout<<"Enter the needed hours: ";
    cin>>hoursneeded;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    int totalHours=days*9*workers;
    int hoursLeft=totalHours-hoursneeded;
    int hoursleft=hoursneeded-totalHours;
    if(totalHours>hoursneeded){
        cout<<"Yes!"<<hoursLeft<<" hours left";
    }
    if(totalHours<hoursneeded){
        cout<<"Not enough time! "<<hoursleft<<" hours needed.";
}
}
main(){
    projectTimecalculation ();
}