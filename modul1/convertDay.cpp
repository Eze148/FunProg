#include <iostream>

using namespace std;

int main()
{
    int day, h, m, s;
    cout<<"Input no of Days: ";
    cin >> day;
    cout<<endl;
    h = day * 24;
    m = h * 60;
    s = m * 60;
    cout<< day << " days is equal to "<<h<<" hours"<<endl;
    cout<< day << " days is equal to "<<m<<" minutes"<<endl;
    cout<< day << " days is equal to "<<s<<" seconds"<<endl;
    return 0;
}
