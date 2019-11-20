#include <iostream>
#include "softwareStudent.h"


using std::cout;

SoftwareStudent::SoftwareStudent() :Student() {
	 program = SOFTWARE;
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays[], Degree program)
	 : Student(studentID, firstName, lastName, emailAddress, age, courseDays) {

	 program = SOFTWARE;
}

Degree SoftwareStudent::GetDegreeProgram() {

	 return SOFTWARE;
}

void SoftwareStudent::print() {

	 this->Student::print();
	 cout << "SOFTWARE";
}

SoftwareStudent::~SoftwareStudent() {

	 Student::~Student();
	 //call super destructor from Student in case something needs to be released

}