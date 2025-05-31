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
    
}