#include <iostream>
#include <string>

using namespace std;

class Patient {
private:
// Private data members
string name;
int age;

public:
// Constructor to initialize the patient
Patient(const string& patientName, int patientAge)
: name(patientName), age(patientAge) {}

// Public method to set the patient's name
void setName(const string& patientName) {
name = patientName;


}

// Public method to get the patient's name
string getName() const {
return name;
}

// Public method to set the patient's age
void setAge(int patientAge) {
if (patientAge > 0) {
age = patientAge;
} else {
cout << "Age must be positive." << endl;
}
}

// Public method to get the patient's age
int getAge() const {
return age;
}

// Public method to display patient details
void displayPatientDetails() const {


cout << "Patient Name: " << name << endl;
cout << "Patient Age: " << age << endl;
}
};

int main() {
// Create a Patient object
Patient patient("Alice Smith", 30);

// Display initial patient details
cout << "Initial Patient Details:" << endl;
patient.displayPatientDetails();

// Update patient details
patient.setName("Bob Smith");
patient.setAge(35);

// Display updated patient details
cout << "\nUpdated Patient Details:" << endl;
patient.displayPatientDetails();

// Attempt to set an invalid age
patient.setAge(-10); // Invalid age



return 0;
}

