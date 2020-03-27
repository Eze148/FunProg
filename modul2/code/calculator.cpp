#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    char pilih;
    float x,y,z;
    cout<<"Welcome To EZ Calculator !!"<<endl;
    cout<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<endl;
    cout<<"Select Menu: ";
    cin>> pilih;

    switch(pilih)
    {
        case '1':
            cout<<"Addition Operation"<<endl;
            cout<<"Currently for 2 numbers operation only "<<endl;
            cout<<endl;
            cout<<"Input 1st number: ";
            cin>> x;
            cout<<endl;
            cout<<"Input 2nd number: ";
            cin>> y;
            cout<<endl;
            z= x+y;
            cout<<"Result: "<<z<<endl;
            break;
        case '2':
            cout<<"Subtraction"<<endl;
            cout<<"Currently for 2 numbers operation only "<<endl;
            cout<<endl;
            cout<<"Input 1st number: ";
            cin>> x;
            cout<<endl;
            cout<<"Input 2nd number: ";
            cin>> y;
            cout<<endl;
            z= x-y;
            cout<<"Result: "<<z<<endl;
            break;
        default:
            cout<<"Input unavailable"<<endl;
    }
    cout<<endl;
    cout<<"Program Terminated"<<endl;
    return 0;
}
