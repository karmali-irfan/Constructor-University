/*
CH-230-A
a9 p5.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main () {
    //declaring variables
   int num; 
   int randomnum;
   int count = 0;

    srand(static_cast<unsigned int > (time(0))); 

    //while loop to stop the game after 10 tries
    while (count < 10){
        count++;
        randomnum = (rand ()) % 100 + 1; 
        //cout << randomnum << endl;
        cin >> num; //user input for guess
        //conditions based on user input 
        if (num == randomnum){
            cout << "Congratulations, you guessed correctly!" << endl;
            break;
        }
        else if (count == 10){
            cout << "You ran out of guesses. You lost :((" << endl;
        }
        else if (num > randomnum) {
            cout << "You guessed too high. Guess again." << endl; 
            cout << 10 - count << " chances left" << endl;
        }
        else if (num < randomnum) {
            cout << "You guessed too low. Guess again." << endl; 
            cout << 10 - count << " chances left" << endl;
        }
    }

    return 0;
}