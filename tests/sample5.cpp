#include <iostream>
using namespace std;
int CountCharacters(char userChar, string userString){
   int result = 0;
   for(int i = 0;i < userString.length();i++){
      if(userString[i] == userChar){
         result++;
      }
   }
   return result;
}
int main() {
   string userString;
   char userChar;
   cin>>userChar>>userString;
   cout<<CountCharacters(userChar,userString)<<endl;
   return 0;
}
