#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    try  {
        if (num <0)
            throw "Negative number"
    }
}