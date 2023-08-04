/*
CH-230-A
a9_p9.cpp
Irfan Karmali 
i.karmali@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
using namespace std; 


int main () {
    //declaring variables
    string str[17], guess, answer; 
    int random, count = 0, len; 
    //strings 
    str[0] = "computer";
    str[1] = "television";
    str[2] = "keyboard";
    str[3] = "laptop";
    str[4] = "mouse";
    str[5] = "five";
    str[6] = "six";                                     
    str[7] = "seven";
    str[8] = "eight";
    str[9] = "nine";
    str[10] = "ten";
    str[11] = "eleven";
    str[12] = "twelve";
    str[13] = "thirteen";
    str[14] = "fourteen";
    str[15] = "fifteen";
    str[16] = "sixteen";

    //random number initializer
    srand(static_cast<unsigned int > (time(0))); 
    random = (rand()) % 17; //random number

    while (1){
        //for loop for replacing the vowels with _
        len = str[random].length(); //string length
        for (int i = 0; i < len; i++){
            if (str[random][i] == 'A' || str[random][i] == 'a' ||
                str[random][i] == 'E' || str[random][i] == 'e' ||
                str[random][i] == 'I' || str[random][i] == 'i' ||
                str[random][i] == 'O' || str[random][i] == 'o' ||
                str[random][i] == 'U' || str[random][i] == 'u'
                )
            {
                cout << "_"; 
            }
            else {
                cout << str[random][i];
            }
        }
        cout << endl; 
        getline (cin, guess) ; //user input for guess
        //if condition if guess is correct
        if (guess == str[random]){
            count++;
            if (count == 1)
                cout << "Good job it only took you " << count << " guess!" << endl;
            else
                cout << "Good job it only took you " << count << " guesses!" << endl;
            cout << "Do you want to play again?" << endl; 
            getline(cin, answer);
            if (answer == "quit"){
                break; 
            }
            else {
                random = (rand()) % 17; 
                count = 0;
            }
        }
        //else condition if guess is incorrect
        else {
            cout << "Sorry :((, try again" << endl;
            count++;
        }

    }
    return 0;
}
