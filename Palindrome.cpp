#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
string palindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return "The given string is not a palindrome";
        }
    }
    return "The given string is a palindrome";
}
int main()
{
    string str,num;
    int choice;
    cout<<"What do you want to do?"<<endl;
    cout<<"Number (1) or String (2): ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter a number: ";
            cin>>num;
            cout<<palindrome(num)<<endl;
        break;
        }
        case 2:
        {
            cout<<"Enter a string: ";
            cin>>str;
            cout<<palindrome(str)<<endl;
        break; 
        }
        case 3:
        {
            cout<<"Thank you for using the program!";
        break;
        }
        default:
        {
            cout<<"Invalid choice!";
        break;
        }
    }
    return 0;
}
