#include<iostream>
using namespace std;

int add(int a,int b)  {
    int c=a+b;
    return c;
}
int main(){
    int x,y,result;
    cout<<"Enter first Number:";
    cin>>x;
    cout<<"enter second Number:";
    cin>>y;
    result=add(x,y);
    cout<<"result:"<<result<<endl;
    
}