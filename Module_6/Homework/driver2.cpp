#include <iostream>
#include "person.h"
#include "employee.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;


Person create_person();
Employee create_employee();
void input_handler(int& input, Person* pp, Employee* ee);
int main(){
        // Define pointers used in the program:
    Person *person;
    Employee *emp;

    int input = 9;
    while (true){
        cout << "\nPlease, select an option to create an object:\n" << endl;
        cout << "0.  Exit program."         << endl;
        cout << "1.  Create a Person."      << endl;
        cout << "2.  Create an Employee."   << endl;
        cout << "3.  Create a Dependent."   << endl;
        cout << "4.  Create a Manager."     << endl;
        cout << "5.  Create a Worker."      << endl;

        cout << "\nPlease, select an option to print information about an object:\n" << endl;
        cout << "0.  Exit program."                              << endl;
        cout << "6.  Print/change information about object: Person."    << endl;
        cout << "7.  Print/change information about object: Employee."  << endl;
        cout << "8.  Print/change information about object: Dependent." << endl;
        cout << "9.  Print/change information about object: Manager."   << endl;
        cout << "10. Print/change information about object: Worker."    << endl;
        
        cin >> input;

        if (input == 0){
            cout << "*** Exiting Program ***";
            break;
        }
        else if(input == 1){
            Person p = create_person();
            person = &p;
        }
        else if (input == 2){
            Employee e = create_employee();
            emp = &e;
        }
        else if (input == 3){
            
        }
        else if (input == 4){
            
        }
        else if (input == 5){
            
        }
        else
            input_handler(input, person, emp);
    }
    return 0;
}


Person create_person(){
    string name;
    string birth_date;
    string gender;
    string ssn;
    string address;
    string home_phone;
        // Clear buffer:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Enter name of person: " << endl;
    getline(cin, name);

    cout << "Enter date of birth in form MM/DD/YY: " << endl;
    getline(cin, birth_date);

    cout << "Enter gender (M, F, Non-binary, ...): " << endl;
    getline(cin, gender);

    cout << "Enter Social Security number (xxx-xx-xxxx): " << endl;
    getline(cin, ssn);

    cout << "Enter Address: " << endl;
    getline(cin, address);

    cout << "Enter Home Phone number: " << endl;
    getline(cin, home_phone);
    Person p(name, birth_date, gender, ssn, address, home_phone);

    return p;
}
Employee create_employee(){
    Employee e;
    return e;
}

void input_handler(int& input, Person* pp, Employee* ee){
    if (input == 6){
        while(true){
        cout << "0. Exit Menu."                 << endl;
        cout << "1. Print name."                << endl;
        cout << "2. Print SSN."                 << endl;
        cout << "3. Print date of birth."       << endl;
        cout << "4. Print gender."              << endl;
        cout << "5. Print address."             << endl;
        cout << "6. Print home phone number."   << endl;
        cout << "Change name"                   << endl;
        cout << "Change gender"                 << endl;
        cout << "Change address"                << endl;
        cout << "Change home phone."            << endl;
        cin >> input;
        if (input == 0){
            cout << "\n*** Exiting Person Menu ***\n" << endl;
            break;
        }
        else if (input == 1){
            cout << pp->get_name() << endl;
        }
        else if (input == 2){
            cout << pp->get_ssn() << endl;
        }
        else if (input == 3){
            cout << pp->get_dob()<< endl;
        }
        else if (input == 4){
            cout << pp->get_gender()<< endl;
        }
        else if (input == 5){
            cout << pp->get_address() << endl;
        }
        else if (input == 6){
            cout << pp->get_phone()<< endl;
        }
    }
    }
    
}