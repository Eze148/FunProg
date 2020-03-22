// By: Eze148
#include <iostream>

using namespace std;

int main()
{
    int tenst, thou, hund, rem;
    double jum;
    cout<<"Input the amount: ";
    cin >> jum;
    cout<<endl;
    tenst = jum / 10000;
    thou = (jum - (tenst * 10000)) / 1000;
    hund = (jum - (tenst * 10000) - (thou * 1000)) / 100;
    rem = (jum - (tenst * 10000) - (thou * 1000) - (hund * 100));
    cout<< "Rp. " <<jum<< " will have "<<tenst<< " in Rp 10,000 "<<thou<< " in Rp 1,000 and "<<hund<<" in Rp 100"<<endl;
    cout<<"Reminder is "<<rem<<endl;
    return 0;
}
