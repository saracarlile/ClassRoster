#include <iostream>
#include "networkStudent.h"


using std::cout;

NetworkStudent::NetworkStudent() :Student() {
	 program = NETWORK;
}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays[], Degree program)
	 : Student(studentID, firstName, lastName, emailAddress, age, courseDays) {

	 program = NETWORK;
}

Degree NetworkStudent::GetDegreeProgram() {

	 return NETWORK;
}

void NetworkStudent::print() {

	 this->Student::print();
	 cout << "NETWORK";
}

NetworkStudent::~NetworkStudent() {

	 Student::~Student();
	 //call super destructor from Student in case something needs to be released

}