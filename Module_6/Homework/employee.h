#include <iostream>
#include "person.h"

using std::string;

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee : public Person
{
    protected:
        string hire_date;
        double salary;
        string location;
        string work_phone_number;

    public:
        Employee();
        string get_hire_date();
        double get_salary();
        string get_location();
        string get_work_phone();
    
};

#endif 