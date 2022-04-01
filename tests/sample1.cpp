#include <iostream>
#include <cstdlib>
using namespace std;
string HeadsOrTails();
int main() {
   srand(time (NULL));
   int numOfTosses;

   cin >> numOfTosses;

   for(int i=0; i< numOfTosses; i++) {
      cout << HeadsOrTails() << endl;
   }
   return 0;
}
string HeadsOrTails() {
   int n;
   n = rand() % 2;
   if(n==0) {
      return "heads";
   }
   else if(n==1) {
      return "tails";
   }
}
