#include <iostream>
using namespace std;

template <class T1, class T2>
class concatenation
{
    T1 data1;
    T2 data2;

public:
    concatenation(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "The concatenation of the two given data is: " << data1 + data2 << endl;
    }
};

int main()
{
    int choice;
    cout << "Press 1 for integer first." << endl
         << "Press 2 for string first." << endl
         << "Press 3 for character first." << endl
         << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int num;
        string str;
        cout << "Enter the integer: ";
        cin >> num;
        cout << "Enter the string: ";
        cin >> str;
        concatenation<string, string> obj(to_string(num), str);
        obj.display();
        break;
    }
    case 2:
    {
        int num;
        string str;
        cout << "Enter the string: ";
        cin >> str;
        cout << "Enter the integer: ";
        cin >> num;
        concatenation<string, string> obj(str, to_string(num));
        obj.display();
        break;
    }
    case 3:
    {
        char character;
        string str;
        cout << "Enter the character: ";
        cin >> character;
        cout << "Enter the string: ";
        cin >> str;
        concatenation<char, string> obj(character, str);
        obj.display();
        break;
    }
    default:
        cout << "INVALID INPUT!!!";
        break;
    }
    return 0;
}