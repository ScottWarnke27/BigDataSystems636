#include <iostream>
using namespace std;

int main(){
    cout << 10 * 5;
    cout << "\n";

    // comparison example
    int x = 5;
    int y = 3;
    cout << ( x > y );
    cout << "\n";

    //C++ strings examples

    string greeting = "Hello";
    cout << greeting <<"\n";

    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " "+ lastName;
    cout << fullName <<"\n";

    //we can also use append

    string fullName2 = firstName.append(lastName);
    cout << fullName2 << "\n";

    //use length to calculate the length (number of characters) in a string
    string text = "Go Army, Beat n@#y!";
    cout << text << "\n";
    cout << "The length of the text is :" <<text.length() <<"\n";

    //access strings
    cout << text[0]; //if i want to see a particular charater from a given string
}