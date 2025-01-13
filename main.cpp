#include <iostream>

using namespace std;

int main()
{
    char letter;
    string fname;
    cout << "Please enter a username"<<endl;
    cin >> fname;
    cout << "Hey!"<<fname<< " Welcome to this boring game..."<<endl;
    cout << "There are five shirts, I want you to choose one for your little brother."<<endl;
    cout << "Select any of these letters from A-E to choose a shirt"<<endl;
    cout << "A"<<endl;
    cout << "B"<<endl;
    cout << "C"<<endl;
    cout << "D"<<endl;
    cout << "E"<<endl;
    cin >> letter;
    switch (letter)
    {
    case 'A':
        cout << "Polo Shirt"<<endl;
    break;

    case 'B':
        cout << "Nike shirt"<<endl;
    break;

    case 'C':
        cout << "Adidas shirt"<<endl;
    break;

    case 'D':
        cout << "Puma shirt"<<endl;
    break;

    case 'E':
        cout << "Kapa shirt"<<endl;
    break;

    default:
        cout << "No shirt available for this input, please read the instructions carefully"<<endl;
    }




    return 0;
}
