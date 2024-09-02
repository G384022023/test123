//personTypeImp.cpp
    
#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << middleName << " " << lastName;
}

void personType::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

void personType::setFirstName(string first)
{
    firstName = first;
}

void personType::setMiddleName(string middle)
{
    middleName = middle;
}

void personType::setLastName(string last)
{
    lastName = last;
}

bool personType::isFirstName(string first)
{
    if (first == firstName) {
        return true;
    }
    else {
        return false;
    }
}

bool personType::isLastName(string last)
{
    if (last == lastName) {
        return true;
    }
    else {
        return false;
    }
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

personType::personType(string first, string last) 

{ 
    firstName = first;
    lastName = last;
}

