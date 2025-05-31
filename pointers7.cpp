#include<iostream>
using namespace std;
class person
{
    public:
    string name="default name";
    int age=0;
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }

};
int main()
{
    person p1("raj",25);
    p1.print();
    cout<<"size of the variable:"<<sizeof(p1)<<"bites"<<endl;
}