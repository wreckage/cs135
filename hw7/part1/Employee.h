#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        string idNumber;
        string department;
        string position;
        int yearsWorked;

    public:
        Employee();
        Employee(string, string);
        Employee(string, string, string, string, int);
        string getName()const;
        string getidNumber()const;
        string getDepartment()const;
        string getPosition()const;
        int getYearsWorked()const;
        void setName(string);
        void setidNumber(string);
        void setDepartment(string);
        void setPosition(string);
        bool setYearsWorked(int);
};

#endif
