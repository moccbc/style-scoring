#include <iostream>
using namespace std;
int CountNumbers(string s) {
   if (s.length() == 0)
      return -1;
   int count = 0;
   for (int i = 0; i < s.size(); ++i) {
      if (s[i] >= '0' && s[i] <= '9')
         ++count;
   }
   if (count == 0)
      return -2;
   return count;
} 
