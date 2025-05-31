#include<iostream>
using namespace std;
float triangle(float height,float width)
{
    return 0.5 * height *width;
}
float rectangle(float  a,float b){
    return a*b;
}
float circle(float radius){
    return 3.14*radius*radius;

}
int main()
{
    float fullarea=rectangle(10,10)+triangle(5,12);
    float subarea=rectangle(3,7)+circle(2)+triangle(2,3);
    cout<<fullarea-subarea<<endl;
}
