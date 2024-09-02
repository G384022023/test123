//personType.h
    
#include <string> 


using namespace std;

class personType
{
public:
    void print() const;
       //Function to output the first name and last name
       //in the form firstName lastName.
  
    void setName(string first, string middle, string last);
      //Function to set firstName, middleName and lastName according 
      //to the parameters.
      //Postcondition: firstName = first; middleName = middle; lastName = last

    void setLastName(string last);
      //Function to set lastName according 
      //to the parameters.
      //Postcondition: lastName = last
    void setFirstName(string first);
      //Function to set firstName according 
      //to the parameters.
      //Postcondition: firstName = first

    void setMiddleName(string middle);
      //Function to set middleName according 
      //to the parameters.
      //Postcondition: middleName = middle

    bool isLastName(string last);
      //Function to return a true or a false
      //comparing last with lastName.

    bool isFirstName(string first);
      //Function to return a true or a false
      //comparing first with firstName.

    string getFirstName() const;
      //Function to return the first name.
      //Postcondition: The value of firstName is returned.

    string getLastName() const;
      //Function to return the last name.
      //Postcondition: The value of lastName is returned.

    personType(string first = "", string last = "");
      //Constructor
      //Sets firstName and lastName according to the parameters.
      //The default values of the parameters are null strings.
      //Postcondition: firstName = first; lastName = last  

 private:
    string firstName; //variable to store the first name
    string middleName; //variable to store the middle name
    string lastName;  //variable to store the last name
};
