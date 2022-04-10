#include <iostream>
#include <cstdlib>
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
}
