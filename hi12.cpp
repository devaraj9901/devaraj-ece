#include <iostream>
#include <vector>
using namespace std;
class person
{
    public:
    string name;
    string pancard_number;
    person(string person_name,string pancardnumber)
    {
        name=person_name;
        pancard_number=pancardnumber;
    }
    void display_details()
    {
        cout<<"bank user details"<<endl;
        cout<<"username: "<<name <<endl;
        cout<<"pancard: "<<pancard_number<<endl;
        cout<<"========================================="<<endl;
    }
};
int main()
{
    string name,pancard;
    vector<person> list_of_users;
    int options;
    while (true)
    {
        cout<<"choose the option:"<<endl;
        cout<<"1.create a account"<<endl;
        cout <<"2. list all the users"<<endl;
        cout<<"3.exit the program"<<endl;
        cin>>options;
        switch(options)
        {
        case 1:
            cout<<"create an account"<<endl;
            cout <<"enter the name of:" <<endl;
            cin >> name;
            cout <<"enter the pancard:" <<endl;
            cin >> pancard;
            list_of_users.push_back(person(name,pancard));
            break;
        case 2:
            cout<<"listing all the accounts"<<endl;
            for(person user:list_of_users)
            {
                user.display_details();
            }
            break;
        case 3:
            cout<<"exiting the program"<<endl;
            return 0;
            break;
        default:
            break;    
        }
    }
}