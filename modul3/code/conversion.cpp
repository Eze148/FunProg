#include <iostream>
using namespace std;

int main()
{
    float kg, pounds;
    cout<<"Conversion Table (Kg to pounds)"<<endl;
    cout<<"Input (in Kg): ";
    cin >> kg;
    cout<<endl;
    cout<<"Kilograms     Pounds"<<endl;
    while(kg < 200)
    {
        pounds = kg * 2.2;
        cout<<kg<<"           "<<pounds<<endl;
        kg++;
    }
}
