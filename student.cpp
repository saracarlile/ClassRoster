
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

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays[]) {

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

int * Student::GetCourseDays() {
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
	 cout << "\t" << "First Name: " << firstName;
	 cout << "\t" << "Last Name: " << lastName;
	 cout << "\t" << "Age: " << age;
	 cout << "\t" << "daysInCourse: {" << courseDays[0] << ", " << courseDays[1] << ", " << courseDays[2] << "} ";
	 cout << "Degree Program: ";
}

Student::~Student() {
	 //empty destructor
}


/* [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.*/