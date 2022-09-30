#include <iostream>
using namespace std;

int main(){
    //the syntax for delcaring variables     type variableName = value

    int myNum = 15;  //declares a variable and stores the value as 15 in one line

    int otherNum;
    otherNum = 27;

    cout << myNum;
    cout << "\n \n";
    cout << otherNum;
    cout << "\n \n";

    int sum = myNum + otherNum;
    cout << "The sum of the two numbers is: "  << sum  << "\n\n"; 

    //excersise from the webpage
    //create a variable, assign the value 50
    int exNum;
    exNum = 50;
    cout << "The exercise wants me to store 50.  The value I stored was: " <<exNum;
    return 0;
}