// Turner Jones Coding 1 Fall 2026
// Adventure Program

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));

    // pseudocode
    //what do we wanna do?
    //setup
        //player health
        int health = 10;
        //total treasure
        int totalTreasure = 1;
        //player dice roll
        int playerDiceRoll = 0;
        //enemy dice roll
        int enemyDiceRoll = 0;
        //player input
        string input;
    //greet the player
    cout << "Let's go on an adventure!\n";
    //start game loop
    while(health > 0) {
        //ask if they wanna go adventuring
        cout << "Would you like to go adventuring?\n";
        // get input
        cin >> input;

        //if they DONT, end the program.
        if (input == "no") {
            break;      //this gets us out of a loop.
        }
        else if(input == "yes") {
            cout << "I like your enthusiasm! Let's go!\n";
        }
        else {          //else is a 'catch-all' case
            cout << "I don't understand. Let's go anyway!\n";
        }

         //if they DO, start an encounter.
        //roll dice for player
        playerDiceRoll = rand() % 6 + 1;
        //roll dice for enemy
        enemyDiceRoll = rand() % 6 + 1;
        //if player roll is equal or higher
            //roll for gold amount and gove to player
        if(playerDiceRoll >= enemyDiceRoll) {
            totalTreasure += totalTreasure + rand() % 10 + 1;
            cout << "You won! You now have " << totalTreasure << " gold!\n";
        }
        //else
            //subtract enemy roll from player health.
        else {
            health -= enemyDiceRoll;
            cout << "Ouch! You lost! You only have " << health << " health remaining.\n";
        }


    } //end of while(health > 0)

    if(health > 0) {
        cout << "Congratulations on returning home with " << totalTreasure << " gold.\n";
    }
    else if(health > 0) {
        cout << "Damaged. You really should pay for a doctor with your " << totalTreasure << " gold.\n";
    }
    else {
        cout << "You have shuffled off this mortal coil. " << totalTreasure << " gold lies next to your remains.\n";
    }

    return 0;
} // end of entire program

//questions
//how could we keep track of how many loops we've been on? "loopCount" variable and ++
//how could we make the enemies stronger every 3 loops? enemyDiceRoll *= (loopcount / 3)

//how do we know when we're at round 5 or 10 or 15 or 20? if(loopCOunt % 5 == 0)