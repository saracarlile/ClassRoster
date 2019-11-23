#include <iostream>
#include "securityStudent.h"

using std::cout;

SecurityStudent::SecurityStudent():Student() {
	 program = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays[], Degree program)
	 : Student(studentID, firstName, lastName, emailAddress, age, courseDays) {

	 program = SECURITY;
}

Degree SecurityStudent::GetDegreeProgram() {
	 
	 return SECURITY;
}

void SecurityStudent::print() {

	 this->Student::print();
	 cout << "SECURITY";
	 cout << "\n";
}

SecurityStudent::~SecurityStudent() {

	 Student::~Student();
	 //call super destructor from Student in case something needs to be released

}