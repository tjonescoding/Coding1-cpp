// Turner Jones Coding 1 Fall 2026
// Adventure 1.0

// setup (extra tools and toolboxes)
#include <iostream>
#include <string>
#include <cstdlib>      //for rand
#include <ctime>        //for rand
using namespace std;

//start of program
int main() {
    //seed the random number generator
    srand(time(0));

    cout << "Let's go adventuring!\n";

    cout << "Here is a random number: ";
    cout << rand();
    cout << "\n";

    cout << "Here are ten random numbers:\n";
    int counter = 0;
    while (counter < 10) {
        cout << (rand() % 10) + 1 << "\n"; //random numbers, add 1 for 1-10
        counter++;
    }


    // Pseudocode
    //pick a number between 1 and 10 and store it
    int theNumber = 0;      //creating a variable to store the number
    theNumber = rand() % 10 + 1;        //assigning a value between
    int input = 0;          //making variabnle to store player input 1 and 10
    
    //ask the player, "guess my 1-10 number"
    cout << "I'm thinking of a number between 1 and 10. Guess it.\n";
    cout << "[debugging: the number is " << theNumber << "]\n";

    do {
        //they answer, we store that in an (int) input variable
        cin >> input;       //getting input from player

        //check to see if their guess is correct
        if(input == theNumber) {
            //is input == theNumber
            //they win! stop asking
            cout << "You win!\n";
        }
        //if false
        else {
            //if too high
            if(input > theNumber) {
                //tell them too high
                cout << "Your guess is too high!\n";
            }
            else {
                //too low
                cout << "Your guess is too low!\n";
            }
        }
        //let them guess again
    } while(input != theNumber);        // ! = not operator


    return 0;  // what
}