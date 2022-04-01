#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int a = 0;
   int b = 0;
   if (a < b) {
      if (a + 1 == b) {
         cout << "a and b are only one away" << endl;
      }
      else {
         cout << "a is less than b" << endl;
      }
   }
   else if (a > b) {
      if (a + 1 == b) {
         cout << "a and b are only one away" << endl;
      }
      else {
         cout << "a is greater than b" << endl;
      }
   }
   else {
      cout << "a is equal to b" << endl;
      if (a + b == 10) {
         cout << "a + b is also equal to 10" << endl;
      }
   }

   int n = 10;
   vector<vector<int>> v(n, vector<int> (n));
   while (n--) {
      for (int k = 0; k < n; k++) {
         for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
               v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
            }
         }
      }
   }

   string userString = "Hello my name is Yuta";
   bool valid = true;
   for (int i = 0; i < userString.size(); i++) {
      if (!('a' <= userString[i] && userString[i] <= 'z' ||
            'A' <= userString[i] && userString[i] <= 'Z')) {
         valid = false;
         break;
      }
   }
}
