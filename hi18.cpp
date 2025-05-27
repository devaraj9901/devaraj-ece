#include<iostream>
using namespace std;
class person
{
public:
    string name;
    char gender;
    int age;

};
class student :public person
{
public:
    string collage;
    string department;

};
class teacher: public person
{
public:
    string collage;
    int salary;
    string designation;
};
int main()
{
    student s1;
    teacher t1;
    s1 : raj;
    t1: dharni;
    cout<< s1 <<endl;
    cout <<t1<< endl;
}