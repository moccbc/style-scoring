#include <iostream>
using namespace std;
string RemoveNonAlpha(string userString) {
    string result;
    for (int i = 0; i < userString.size(); ++i) {
        if ((userString[i] >= 'a' && userString[i] <= 'z') || (userString[i] >= 
'A' && userString[i] <= 'Z'))
            result += userString[i];
    }
    return result;
}
int main() {
    string line;
    getline(cin, line);
    cout << RemoveNonAlpha(line) << endl;
   return 0;
}
