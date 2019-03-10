#include <iostream>
#include <string>

#include "List.h"
#include "Patient.h"

using namespace std;


List::List() : elementCount(0), capacity(MAX_ELEMENTS) {
	// this->elementCount = 1;
	// this->capacity = 5;
}

int List::getElementCount() const {
	return this->elementCount;	
}

bool List::insert(const Patient& newElement) { // something wrong here that I need to fix
    int i = 0;
    int mark = 0;
	if (search(newElement) != NULL) {
        cout << "the element is already there." << endl;
        return false; 
    } else {
    	if (elementCount == 0) {
    		elements[0] = newElement;
    	} else {
    		for (i = 0; i < elementCount; i++) {
    			if (newElement.getCareCard() < elements[i].getCareCard()) {
    				mark = i;
    				for (int j = elementCount-1; j>= i; j--) {
    					elements[j+1] = elements[j];
    				}
    				elements[mark] = newElement; // once you finish the second loop, exit the loop
    											// otherwise the new added element will be compared to the rest again 
    				break;
    			} else {
    				elements[elementCount] = newElement;
    			}

    		}
    	}
       elementCount++;
       return true;
    }
}

bool List::remove( const Patient& toBeRemoved ) {
	if(search(toBeRemoved)  != NULL) { // then it means the element is on the list and can be removed
		for(int i = 0; i < elementCount; i++) {
			if (elements[i].getCareCard() == toBeRemoved.getCareCard()) {
				cout << "removing " << elements[i].getCareCard() << endl;
				for (int j = i; j < elementCount; j++) {
					elements[j] = elements[j+1];

				}
			}
		}
		elementCount--;
		return true;
	}
	return false;
}


Patient* List::search(const Patient& target) {
    Patient *foundPatient = NULL;
    // bool found = false;

    for (int i = 0; i < elementCount; i++) {
        if (elements[i].getCareCard() == target.getCareCard()) {
            foundPatient = &elements[i];
        }
    }

    return foundPatient;	
}

void List::removeAll() {
    cout << "my element count now is " << elementCount << endl;
	while (elementCount>0) {
		remove(elements[0]);
	}

	cout << "The element count now is " << elementCount << " Now all elements removed" << endl;
}

void List::displayAll() {
	for (int i = 0; i <elementCount; i++) {
		cout << elements[i];
	}
}

