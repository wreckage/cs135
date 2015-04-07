/* Homework #3 - Program #1 (Dice roll)
 * March 26, 2015 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rolls = 0; // user's input for number of rolls
    int numRolled; // keeps track of number of times rolled in for loop
    int num1 = 0; // accumulators for each number of die (dice) rolled
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;

    srand((unsigned int)time(NULL));

    cout << "How many times would you like to roll the dice?\n";
    while (rolls < 1) // gotta have 1 or more rolls
    {
        cin >> rolls;
        if (rolls < 1)
        {
            cout << "This is an invalid number. \n"
                 << "The number of rolls should be equal to "
                 << "or greater than 1.\n"
                 << "Please enter again.\n";
        }
    }

    for (int rolled = 0; rolled < rolls; rolled++)
    {
        numRolled = rand() % 6 + 1;

        if (numRolled == 1) // to save space I've omitted curlies here
            num1++;
        else if (numRolled == 2)
            num2++;
        else if (numRolled == 3)
            num3++;
        else if (numRolled == 4)
            num4++;
        else if (numRolled == 5)
            num5++;
        else
            num6++;
    }

    cout << "\nDICE ROLL STATISTICS\n\n";
    cout << "# Rolled \t # Times \t % Times\n";
    cout << "-------- \t -------- \t --------\n";
    cout << "      1 \t" << setw(8) << num1 << " \t" << setw(8) 
         << fixed << setprecision(2) << ((double)num1/rolls) * 100 << "%\n";
    cout << "      2 \t" << setw(8) << num2 << " \t" << setw(8) 
         << fixed << setprecision(2) << ((double)num2/rolls) * 100 << "%\n";
    cout << "      3 \t" << setw(8) << num3 << " \t" << setw(8) 
         << fixed << setprecision(2) << ((double)num3/rolls) * 100 << "%\n";
    cout << "      4 \t" << setw(8) << num4 << " \t" << setw(8) 
         << fixed << setprecision(2) << ((double)num4/rolls) * 100 << "%\n";
    cout << "      5 \t" << setw(8) << num5 << " \t" << setw(8) 
         << fixed << setprecision(2) << ((double)num5/rolls) * 100 << "%\n";
    cout << "      6 \t" << setw(8) << num6 << " \t" << setw(8) 
         << fixed << setprecision(2) << ((double)num6/rolls) * 100 << "%\n";

    return 0;
}
