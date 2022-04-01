#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
   int a = 0;
   int b = 0;
   if (a < b) {
      cout << "a is less than b" << endl;
   }
   else if (a > b) {
      cout << "a is greater than b" << endl;
   }
   else {
      cout << "a is equal to b" << endl;
   }

   int n = 10;
   while (n--) {
      cout << n << endl;
   }

   int m = 10;
   for (int i = 0; i < m; i++) {
      cout << i << " ";
   }
   cout << endl;

   int l = 10;
   do {
      cout << l << " ";
   } while(l--);
   cout << endl;

   string userString = "Hello my name is Yuta";
   bool valid = true;
   if (!('a' <= userString[0] && userString[0] <= 'z' ||
         'A' <= userString[0] && userString[0] <= 'Z')) {
      valid = false;
      break;
   }
}
