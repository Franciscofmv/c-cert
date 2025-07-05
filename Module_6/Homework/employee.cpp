#include "employee.h"


using std::cout;
using std::endl;
using std::getline;
using std::cin;

Employee::Employee(): Person(){
    cout << "Enter hire date MM/DD/YYYY: " << endl;
    cin >> hire_date;

    cout << "Enter salary (just the numbers):" << endl;
    cin >> salary;

    cout << "Enter work location: " << endl;
    cin >>location;

    cout << "Enter work phone number in the format xxx-xxx-xxxx: " << endl;
    cin >> work_phone_number;
}

string Employee::get_hire_date(){
    return hire_date;
}
double Employee::get_salary(){
    return salary;
}
string Employee::get_location(){
    return location;
}
string Employee::get_work_phone(){
    return work_phone_number;
}