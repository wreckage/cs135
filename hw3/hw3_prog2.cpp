/* Homework #3 - Program #2 (Multiplication Table)
 * March 28, 2015 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char selection = '\0';
    int numTable = 0;
    int startNum = 1;

    while (selection != 'q')
    {
        cout << "MENU\n";
        cout << "a) Generate Multiplication Table\n";
        cout << "q) Quit the program\n";
        cout << "Please make a selection: ";
        cin >> selection;
        if (selection == 'a')
        {
            cout << "Please enter a number for your "
                 << "multiplication table: \n\n";

            while (numTable < 1 || numTable > 10)
            {
                cin >> numTable;
                if (numTable < 1 || numTable > 10)
                {
                    cout << "That number is invalid. Please enter a number "
                         << "between 1 and 10.\n";
                }
            }

            cout << "MULTIPLICATION TABLE: " << numTable << "'s\n\n";

            // this for loop makes the numbers above the table
            for (int i = 1; i <= numTable; i++)
            {
                cout << setw(5) << i; 
            }

            cout << endl;
            cout << "   "; // the top of the table starts with 3 spaces

            // this for loop makes the top dashes of the table
            for (int i = 1; i <= numTable; i++)
            {
                cout << "----|";
            }

            cout << endl;

            for (int count1 = 0; count1 < numTable; count1++)
            {
                cout << setw(2) << count1 + 1 << "|";  // row number
                for (int count2 = 1; count2 <= numTable; count2++)
                {
                    cout << setw(4) << startNum * count2 << "|";
                }
                cout << endl;
                startNum++;
                // this for loop makes the bottom dashes of a row
                for (int i = 1; i <= numTable; i++)
                {
                    if (i == 1)
                    {
                        cout << " -|";
                    }
                    cout << "----|";
                }
                cout << endl;
            }
            cout << endl;
            // reset numTable and startNum in case user wants to go again
            numTable = 0;
            startNum = 1;
        }
        else if (selection != 'q')
        {
            cout << "Invalid Selection\n\n";
        }
    }
    
    cout << "You have chosen to quit the program. Thank you for using!\n";

    return 0;
}
