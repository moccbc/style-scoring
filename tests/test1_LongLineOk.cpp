#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   string userString = "Hello my name is Yuta";
   if (!('a' <= userString[0] && userString[0] <= 'z')) {
      cout << "String does not start with letter!" << endl;
   }
}
