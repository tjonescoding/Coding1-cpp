//Turner Jones
//array.cpp

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Loops and lists!\n";


    //creating an array of favorite video games
    //variable type is 'string'. size is 5
    string favGames[5];     //this creates 5 empty string variables

    //assign a value to the first game in the array
    favGames[0] = "Kenshi";

    cout << "My top fav game is " << favGames[0] << ".\n";

    cout << "Please add another game to the list.\n";
    string input;
    getline(cin, input);
    //add the input to the array
    favGames[1] = input;

    cout << "The second fav game is " << favGames[1] << ".\n";

    //a for loop has3 useful variables attached to it.
    //for(setup, test, increment) { code }

    cout << "Here are all the fav games:\n";

    for (int i = 0; i < 5; i++) {
        //if line is empty, continue
        if(favGames[i] == "") {
            continue;       // go to end of loop
        }
            
        cout << favGames[i] << "\n";
    
    }
    

    //build an array of friends
    //Collection Initializer
    string friends[] = {"Money", "Dime", "Bob", "Smithee", "Curlie"};
    //cout << "First friend is" << friends[0] << ".\n";

    //show friends list to user
    for(int i = 0; i < 6; i++) {
        cout << friends[i] << "\n";
    }

    //ask the user to pick a friend to remove
    cout << "Which friend shoud we eliminate forever?\n";
    getline(cin, input);

    //remove the friend

    for(int i = 0; i < 6; i++) {
        if (input == friends[i]) {
            friends [i] = "----";
        }
    }
    //show the new friends list
    //show friends list to user
    cout << "Here is the new gang!\n";
    for (int i = 0; i < 6; i++) {
        cout << friends[i] << "\n";
    }

    //create an array of scores with a size of 10 
    //ask the user to input scores until the array is full or until done
    //then display the scores

    const int SIZE = 10;        //constant variables cannot be changed

    int scores[SIZE];
    for(int i = 0; i < SIZE; i++) {
        cout << "Please add a score: ";
        getline(cin, input);

        if(input == "done") {
            scores [i] = -1;        //the break number
            break;
        }

        scores[i] = stoi(input);        //stoi = convertstring to int

    }

    for(int i = 0; i < SIZE; i++) {
        if(scores[i] == 0) {        //looking for the break number
            break;
        }
        cout << scores[i] << "\n";
    }

    return 0;
}