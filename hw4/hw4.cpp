/* Homework #4 (Rock, Paper, Scissors)
 * April 04, 2015 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int getComputerChoice();
int getPlayerChoice();
string getStringChoice(int);
bool isTie(int, int);
bool isPlayerWinner(int, int);

int main()
{
    char userselect = '\0'; // holds the user's choice to either play or quit
    int userchoice = 0; // holds the user's choice of rock, paper, or scissors
    int compchoice = 0; // holds the computer's choice of rock, paper, or scissors
    string suserchoice; // string version of user's choice
    string scompchoice; // string version of computer's choice

    srand((unsigned int)time(NULL));

    while (userselect != 'q')
    {
        cout << "\nROCK PAPER SCISSORS MENU\n";
        cout << "------------------------\n";
        cout << "p) Play Game\n";
        cout << "q) Quit\n";
        cout << "Please enter your choice : \n";
        cin >> userselect;
        if (userselect == 'p')
        {
            compchoice = getComputerChoice();
            userchoice = getPlayerChoice();
            suserchoice = getStringChoice(userchoice);
            scompchoice = getStringChoice(compchoice);

            cout << "\nYou chose : " << suserchoice << endl;
            cout << "The computer chose : " << scompchoice << "\n\n";
            if (isTie(userchoice, compchoice))
                cout << "It's a TIE!";
            else
                if (isPlayerWinner(userchoice, compchoice))
                    cout << "You WIN!";
                else
                    cout << "Sorry you LOSE!";
            cout << "\n\n";
        }
        else if (userselect != 'q')
            cout << "Invalid selection. Try again.\n\n";
    }

    cout << "You have chosen to quit the program. ";
    cout << "Thank you for using the program!\n";

    return 0;
}

int getComputerChoice()
{
    return rand() % 3 + 1;
}

int getPlayerChoice()
{
    int userchoice = 0;
    while (userchoice < 1 || userchoice > 3)
    {
        cout << "\n\nRock, Paper, or Scissors?\n";
        cout << "1) Rock\n";
        cout << "2) Paper\n";
        cout << "3) Scissors\n";
        cout << "Please enter your choice : ";
        cout << endl;

        cin >> userchoice;
        if (userchoice < 1 || userchoice > 3)
            cout << "Invalid selection.\n";
    }
    return userchoice;
}

/* getStringChoice: This function was not required in the homework directions,
 * but I've included it to avoid repeating myself in main(). This function
 * returns the string representation of int choice: "Rock" if choice is 1, 
 * "Paper" if it's 2, "Scissors" if it's 3. */
string getStringChoice(int choice)
{
    switch(choice)
    {
        case(1):
            return "Rock";
        case(2):
            return "Paper";
        case(3):
            return "Scissors";
        default:
            return "Invalid choice";
    }
}

bool isTie(int userchoice, int compchoice)
{
    if (userchoice == compchoice)
        return true;
    else
        return false;
}

bool isPlayerWinner(int userchoice, int compchoice)
{
    bool result;

    if (userchoice == compchoice)
    {
        cout << "isPlayerWinner() shouldn't be used if it's a tie. ";
        cout << "Use isTie() instead\n";
        cout << endl;
        return false;
    }

    if (userchoice == 1)
        if (compchoice == 2)
            result = false;
        else
            result = true;
    else if (userchoice == 2)
        if (compchoice ==  1)
            result = true;
        else
            result = false;
    else
        if (compchoice == 1)
            result = false;
        else
            result = true;

    return result;
}
