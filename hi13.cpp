#include<iostream>
using namespace std;
class person
{
private:
    string name;
    int age;
public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setage(int a)
    {
        age=a;
    }
    int getage()
    {
        return age;
    }
};
int main()
{
    person p1;
    p1.setName("raj");
    cout<<p1.getName()<<endl;
    p1.setage(24);
    cout<<p1.getage()<<endl;
}

