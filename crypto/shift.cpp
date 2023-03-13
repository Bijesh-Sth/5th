// implement shift cipher

#include <iostream>
#include <string>

using namespace std;

void encryption(string s, int key);
void decryption(string s, int key);

int main()
{
    int key, choice;
    string s;

    cout << "****** MENU ******" << endl;
    cout << "1. Encryption" << endl;
    cout << "2. Decryption" << endl;
    cout << "Choice:: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nPlain String: ";
        getline(cin >> ws, s);
        cout << "Enter key:: ";
        cin >> key;
        encryption(s, key);
        break;
    case 2:
        cout << "Encrypted String: ";
        getline(cin >> ws, s);
        cout << "Enter key:: ";
        cin >> key;
        decryption(s, key);
        break;
    }

    cout << endl
         << "Bijesh Shrestha CSIT 5th Semester"<<endl;
    return 0;
}

void encryption(string s, int key)
{
    string conv = "";
    for (char c : s)
    {
        if (c == ' ')
        {
            conv += c;
        }
        else
        {
            conv += char((((char(int(toupper(c))) - int('A')) + key) % 26) + int('A'));
        }
    }
    cout << conv << endl;
}

void decryption(string s, int key)
{
    string conv = "";
    for (char c : s)
    {
        if (c == ' ')
        {
            conv += c;
        }
        else
        {
            conv += char((((char(int(toupper(c))) - int('Z')) - key) % 26) + int('Z'));
        }
    }
    cout << conv << endl;
}
