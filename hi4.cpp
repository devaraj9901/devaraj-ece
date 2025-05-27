#include<iostream>
using namespace std;
class Book{
public:
    string title;
    string author;
    float price;
    Book() {
        title="unknown";
        author="unknown";
        price=0;

    }
    void display(){
        cout<<"title:"<<title<<",     author:"<<author<<",    price:$"<<price<<endl;
    }
};
int main(){
    Book b;
    b.display();
    return 0;
}
