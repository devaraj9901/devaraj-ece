#include <iostream>
using namespace std;
 
enum Level {
  LOW,
  MEDIUM,
  HIGH
}; 

int main() {
  enum Level myVar = LOW;
  cout << myVar;
  return 0;
}
