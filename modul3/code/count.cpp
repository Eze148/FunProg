#include <iostream>
using namespace std;

int main()
{
    int a, positive = 0, negative = 0;
    cout<<"Enter an integer, the input ends if it is 0: ";
    while(a != 0){
        cin >> a;
        if(a > 0){
            positive++;
        }
        else if(a==0){
            break;
        }
        else{
            negative++;
        }
    }
    cout<<"The number of positives is "<<positive<<endl;
    cout<<"The number of negatives is "<<negative<<endl;
    cout<<"The total is "<<negative+positive+1<<endl;
}
