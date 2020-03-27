#include <iostream>
using namespace std;

int main()
{
    int yob,age;
    cout << "Your year of birth : ";
    cin >> yob;
    age = 2019-yob;
    if(age < 0)
    {
        cout << "An error occurred. Please input the correct year of birth " <<endl;
    }
    else
    {
        cout <<"Your age this year is "<< age <<endl;
    }
    return 0;
}

