#include <iostream>
#include <string>
using namespace std;
int main() {
   string password;
    cin>>password;
    string new_password = "";
    for(int i=0; i<password.length(); i++)
    {
        if(password[i] == 'i')
        {
            new_password[i] += '1';
        }
        else if (password[i] == 'a')
        {
            new_password += '@';
        }
        else if(password[i] == 'm')
        {
            new_password += 'M';
        }
        else if(password[i] == 'B' )
        {
            new_password += '8';
        }
        else if(password[i] == 's')
        {
            new_password += '$';
        }
        else
        {
            new_password += password[i];
        }
    }
    new_password = new_password + '!';
    cout<<new_password << endl;
   return 0;
}
