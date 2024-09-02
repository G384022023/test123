//Test Program personType with first name and last name 
  
#include <iostream>  
#include <string>
#include "personType.h" 
 
using namespace std;

int main()
{
    personType student("Ren", "Sato"); //I have no middle name.
    

    string firstName;
    string middleName;
    string lastName;
   
    cout << "Please enter the student's first name: ";
    cin >> firstName;
    cout << "Please enter the student's middle name: ";
    cin >> middleName;
    cout << "Please enter the student's last name: ";
    cin >> lastName;
    
    personType student2;
  
    student2.setFirstName(firstName);
    student2.setMiddleName(middleName);
    student2.setLastName(lastName);
   
    cout << endl;
    student2.print();
    cout << endl;

    if (student.isLastName(lastName)) {
        cout << "Student's last name is " << student2.getLastName() << endl;
    }
    else {
        cout << "Student's last name is not " << student2.getLastName() << endl;
    }
    if (student.isFirstName(firstName)) {
        cout << "Student's first name is " << student2.getFirstName() << endl;
    }
    else {
        cout << "Student's first name is not " << student2.getFirstName() << endl;
    }

    return 0;
}
