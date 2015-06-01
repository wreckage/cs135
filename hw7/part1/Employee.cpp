#include "Employee.h"

Employee::Employee()
{
    name = "";
    idNumber = "";
    department = "";
    position = "";
    yearsWorked = 0;
}

Employee::Employee(string n, string id)
{
    name = n;
    idNumber = id;
    department = "";
    position = "";
    yearsWorked = 0;
}

Employee::Employee(string n, string id, string dept, string pos, int yrs)
{
    name = n;
    idNumber = id;
    department = dept;
    position = pos;
    if (yrs > 0)
        yearsWorked = yrs;
    else
        yearsWorked = 0;
}

string Employee::getName()const
{
    return name;
}

string Employee::getidNumber()const
{
    return idNumber;
}

string Employee::getDepartment()const
{
    return department;
}

string Employee::getPosition()const
{
    return position;
}

int Employee::getYearsWorked()const
{
    return yearsWorked;
}

void Employee::setName(string n)
{
    name = n;
}

void Employee::setidNumber(string id)
{
    idNumber = id;
}

void Employee::setDepartment(string dept)
{
    department = dept;
}

void Employee::setPosition(string pos)
{
    position = pos;
}

bool Employee::setYearsWorked(int yrs)
{
    bool validData = false;

    if (yrs > 0)
    {
        validData = true;
        yearsWorked = yrs;
    }

    return validData;
}
