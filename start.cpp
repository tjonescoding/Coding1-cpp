//comment goes like this
//Turner Jones Coding 1 Fall 2026

#include <iostream>         // for cout
#include <string>           //for string
using namespace std;        //for cout

//the start of our program is 'int main()'
int main() {
    cout << "Hello player!\n";     //\n for new line
    cout << "It's me, line two.\n";

    //let's get user INPUT with cin (console-in)
    cout << "What is your name, player?\n";
    //we want to store what the user typed in a string variable
    string input;       //create a new variable named "input"
    cin >> input;       //get input from the user
    cout << "Hello, " << input << ".\n";   //display their input

    //let's talk about variables some more.
    int count = 10;

    //just like madlibs
    cout << "The count is " << count << ".\n";

    // a while loop will keep running until its condition is false
    // while 'count' is greater than zero, keep looping
    while(count > 0) {
        if(count % 2 == 0) {        //"if the remainder of count / 2 ="
            // cout << "even!\n";
        }
        else {
            cout << "Hello! " << count << "\n";
        }

        count = count - 1;      // subtract 1 from count
    }

    int totalKeys = 0;
    cout << "Type 'key' to get a key.\n";
    cin >> input;

    if (input == "key") {
        cout << "You found a key!\n";
        totalKeys++;
    }
    else {
        cout << "sorry, you did it wrong. doofus.\n";
    }

    cout << "you have " << totalKeys << " keys.\n";


} //the end of main()
