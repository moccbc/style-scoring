#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   int x;
   cin >> x;
   int n = 0;
   for (int i = 0; i < x; i++) {
      n += i;
      if (n < 0) { if (n == 0) { cout << n << endl; }
         n *= n;
         cout << i << endl;
         cout << n << endl;
      }
      cout << n*n << endl;
   }
}
