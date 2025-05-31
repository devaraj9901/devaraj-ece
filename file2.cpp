#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file("user.txt");
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    file<<"Name: "<<name<<"\nage: "<<age<<endl;
    file.close();
    return 0;
}
