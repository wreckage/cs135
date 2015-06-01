#include <iostream>
#include <iomanip>
#include "Employee.h"
using namespace std;

int main()
{
    const string tableBorder(76, '-');
    Employee employees[] = {
        Employee("Jenny Jacobs", "JJ8990", "Accounting", "President", 15),
        Employee("Myron Smith", "MS7571", "IT", "Programmer", 5),
        Employee("Chris Raines", "CR6873", "Manufacturing", "Engineer", 30)
    };

    cout << tableBorder << endl;
    cout << "|      Name       ||"
         << "   ID   ||"
         << "    Department ||"
         << "  Position  ||"
         << " Years Worked |" << endl;
    cout << tableBorder << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "| " << setw(15) << employees[i].getName() 
             << " || " << employees[i].getidNumber()
             << " || " << setw(13) << employees[i].getDepartment()
             << " || " << setw(10) << employees[i].getPosition()
             << " || " << setw(12) << employees[i].getYearsWorked()
             << " |";
        cout << endl << tableBorder << endl;
    }

    return 0;
}
