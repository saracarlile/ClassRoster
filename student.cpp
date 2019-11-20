
#include <iostream>
#include <string>
#include <iostream> 
#include "student.h"
using std::string;
using std::cout;
using std::endl;



// Empty constructor definition
Student::Student() {

	 this->studentID = "";
	 this->firstName = "";
	 this->lastName = "";
	 this->emailAddress = "";
	 this->age = 0;
	 for (int i = 0; i < courseDaysArraySize; i++) {
		  this->courseDays[i] = 0;
	 }
	 //Student constructor doesn't set degree program
}
//constructor with parameter definition

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int coureDays[]) {

	 this->studentID = studentID;
	 this->firstName = firstName;
	 this->lastName = lastName;
	 this->emailAddress = emailAddress;
	 this->age = age;
	 for (int i = 0; i < courseDaysArraySize; i++) {
		  this->courseDays[i] = courseDays[i];
	 }
}

//getters

string Student::GetStudentID() {
	 return studentID;
}

string Student::GetFirstName() {
	 return firstName;
}

string Student::GetLastName() {
	 return lastName;
}

string Student::GetEmailAddress() {
	 return emailAddress;
}

int Student::GetAge() {
	 return age;
}

int* Student::GetCourseDays() {
	 return courseDays;
}

//setters

void Student::SetID(string studentID) {
	 this->studentID = studentID;
}

void Student::SetFirstName(string firstName) {
	 this->firstName = firstName;
}

void Student::SetEmailAddress(string emailAddress) {
	 this->emailAddress = emailAddress;
}

void Student::SetAge(int age) {
	 this->age = age;
}

void Student::SetCourseDays(int courseDays[]) {
	 for (int i = 0; i < courseDaysArraySize; i++) {
		  this->courseDays[i] = courseDays[i];
	}
}

//print method displays all fields except degree program
void Student::print() {
	 cout << studentID << endl;
	 cout << firstName << endl;
	 cout << lastName << endl;
	 cout << emailAddress << endl;
	 cout << age << endl;
	 cout << courseDays[0] << endl;
	 cout << courseDays[1] << endl;
	 cout << courseDays[2] << endl;
	 cout << courseDays[3] << endl;
}

Student::~Student() {
	 //empty destructor
}