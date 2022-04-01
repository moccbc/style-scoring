#include <iostream>
using namespace std;
int main() {
   string textInput;
   getline(cin, textInput);
   while(textInput != "Done" && textInput != "done" && textInput != "d") {
      string result;
      for(int i= textInput.length() -1; i>=0; i--) {
         result += textInput[i];
      }
      cout << result << endl;
      getline(cin, textInput);
   }
   return 0;
}
