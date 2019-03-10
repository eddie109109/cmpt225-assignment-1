#include <iostream>
#include <string>

#include "Patient.h"
#include "List.h"


 using namespace std;
 
int main()
{
   Patient kate("1111111111");
   Patient mike("2111111111");
   Patient pink("3111112111");
   Patient sink("4111112111");

   List patientList;
    patientList.insert(kate);
    patientList.insert(mike);
    patientList.insert(pink);
    patientList.insert(sink);
   
    // patientList.remove(kate);
    // patientList.remove(mike);
    // patientList.remove(pink);
    // patientList.remove(sink);
   // cout << patientList.getElementCount() << endl;
   
   patientList.removeAll();
   patientList.displayAll();
   return 0;
 }