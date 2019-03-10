/*
 * Patient.cpp
 * 
 * Class Description: Models a walk-in clinic patient.
 * Class Invariant: Each patient has a unique care card number.
 *                  This care card number must have 10 digits.
 *                  This care card number cannot be modified. 
 *
 * Author:
 * Date:
 */

// You can add #include statements if you wish.
#include <iostream>
#include <string>
#include "Patient.h"

using namespace std;

// Default Constructor
// Description: Create a patient with a care card number of "0000000000". 
// Postcondition: All data members set to "To be entered", 
//                except the care card number which is set to "0000000000".       
Patient::Patient() {

// You need to complete this method.
   careCard = "0000000000";
   name = "To be entered";
   address =  "To be entered";
   phone = "To be entered";
   email = "To be entered";


}

// Parameterized Constructor
// Description: Create a patient with the given care card number.
// Postcondition: If aCareCard does not have 10 digits, then care card is set to "0000000000".
//                All other data members set to "To be entered".
Patient::Patient(string aCareCard) {

// You need to complete this method.
    if (aCareCard.length() != 10) {
        careCard = "0000000000";
    } else {
        careCard = aCareCard;
    }
    name = "To be entered";
    address =  "To be entered";
    phone = "To be entered";
    email = "To be entered";

}

// Getters and setters -> You need to implement these methods.
    string Patient::getName() const {
        return this->name;
    }

    // Description: Returns patient's address.
    string Patient::getAddress() const {
        return this->address;
    }

    // Description: Returns patient's phone.
    string Patient::getPhone() const {
        return this->phone;
    }

    // Description: Returns patient's email.
    string Patient::getEmail() const {
        return this->email;
    }
    
    // Description: Returns patient's care card.
    string Patient::getCareCard() const {
        return this->careCard;
    }

    // Description: Sets the patient's name.
    void Patient::setName(const string aName) {
        this->name = aName;
    }

    // Description: Sets the patient's address.
    void Patient::setAddress(const string anAddress) {
        this->address = anAddress;
    }

    // Description: Sets the patient's phone.
    void Patient::setPhone(const string aPhone) {
        this->phone = aPhone;
    }

    // Description: Sets the patient's email.
    void Patient::setEmail(const string anEmail) {
        this->email = anEmail;
    }




// Overloaded Operators
// Description: Comparison operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if both Patient objects have the same care card number.
bool Patient::operator == (const Patient & rhs) {
    
    // Compare both Patient objects
    return this->careCard == rhs.getCareCard();
    
} // end of operator ==

// Description: Greater than operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if the care card number of "this" Patient object is > the care card 
//              number of "rhs" Patient object
bool Patient::operator > (const Patient & rhs) {
    
    // Compare both Patient objects
    return this->careCard > rhs.getCareCard();
    
} // end of operator >


// Description: Prints the content of "this".
ostream & operator<<(ostream & os, const Patient & p) {
    
// You need to complete this method.  
    os<< p.getCareCard() << " - Patient: " << p.getName() << ", " << p.getAddress() << ", "  << p.getPhone() << ", " << p.getEmail() << endl; 

         
    return os;

} // end of operator<<

// end of Patient.cpp