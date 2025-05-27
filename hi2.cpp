#include<iostream>
#include<vector>
using namespace std;
class person
{
 public:
    string name;
    string pancard_number;
    string aadhar_card_number;

    person(string user_name,string p_card, string a_card)
    {
        name=user_name;
        pancard_number=p_card;
        aadhar_card_number=a_card;

    }
    void display_details()
    {
        cout<<"user details"<<endl;
        cout<<"username: "<<name <<endl;
        cout<<"pancard: "<<pancard_number<<endl;
        cout<<"aadhar card: "<<aadhar_card_number<<endl;
        cout<<"========================================="<<endl;
    }
};
int main()
{
    vector<person> list_of_users;
    list_of_users.push_back(person("usre1","PCARD1234","ACARD1234"));
    list_of_users.push_back(person("usre1","PCARD1234","ACARD1234"));
    list_of_users.push_back(person("usre1","PCARD1234","ACARD1234"));

    for (person user: list_of_users)
    {
        user.display_details();
    }
}