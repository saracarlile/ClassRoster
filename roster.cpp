#pragma once
#include <string>
#include <iostream>
#include "roster.h"
using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::stringstream;


//empty constructor definition
Roster::Roster() {
	 this->capacity = 0;
	 this->lastIndex = -1;
	 this->classRosterArray = nullptr;
}

//constructor that sets max capacity for roster
Roster::Roster(int capacity) {
	 this->capacity = capacity;
	 this->lastIndex = -1; // means empty
	 this->classRosterArray = new Student*[capacity]; //array of pointers to Students of size capacity
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program) {
	 cout << lastIndex << "LAST INDEX ++" << endl;
	 lastIndex++;

	 if (program == SECURITY ) {
		  int daysInCourse[Student::courseDaysArraySize]; //array size from Student class
		  daysInCourse[0] = daysInCourse1;
		  daysInCourse[1] = daysInCourse2;
		  daysInCourse[2] = daysInCourse3;

		  classRosterArray[lastIndex] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, program);
	 }
	 if (program == NETWORK) {
		  int daysInCourse[Student::courseDaysArraySize]; //array size from Student class
		  daysInCourse[0] = daysInCourse1;
		  daysInCourse[1] = daysInCourse2;
		  daysInCourse[2] = daysInCourse3;

		  classRosterArray[lastIndex] =  new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, program);
	 }
	 if (program == SOFTWARE) {
		  int daysInCourse[Student::courseDaysArraySize]; //array size from Student class
		  daysInCourse[0] = daysInCourse1;
		  daysInCourse[1] = daysInCourse2;
		  daysInCourse[2] = daysInCourse3;

		  classRosterArray[lastIndex] =  new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, program);
	 }

	 
}

void Roster::printAll() {

	 for (int i = 0; i <= this->lastIndex; i++) {
		  (this->classRosterArray)[i]->print();
	 }
}

void Roster::parseThenAdd(string row) {
	 // parse studentData and add each student to classRoster.

		  //temp variables to store values during loop to build object
		  string studentIDTemp;
		  string firstNameTemp;
		  string lastNameTemp;
		  string emailAddressTemp;
		  int ageTemp;
		  int courseDays1Temp;
		  int courseDays2Temp;
		  int courseDays3Temp;
		  string degreeProgramTemp;
		  Degree program;

		  //read student ID in row studentData[i]
		  int rightHandSide = row.find(",");
		  studentIDTemp = row.substr(0, rightHandSide);

		  //read firstName
		  int leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  firstNameTemp = row.substr(leftHandSide, rightHandSide - leftHandSide);

		  //read lastName
		  leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  lastNameTemp = row.substr(leftHandSide, rightHandSide - leftHandSide);

		  //read emailAddress
		  leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  emailAddressTemp = row.substr(leftHandSide, rightHandSide - leftHandSide);

		  //read age
		  leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  ageTemp = std::stoi(row.substr(leftHandSide, rightHandSide - leftHandSide));  // convert string to int using std::stoi( str )

		  //read course days 1 value
		  leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  courseDays1Temp = std::stoi(row.substr(leftHandSide, rightHandSide - leftHandSide));  // convert string to int using std::stoi( str )

		  //read course days 2 value
		  leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  courseDays2Temp = std::stoi(row.substr(leftHandSide, rightHandSide - leftHandSide));  // convert string to int using std::stoi( str )

		  //read course days 3 value
		  leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  courseDays3Temp = std::stoi(row.substr(leftHandSide, rightHandSide - leftHandSide));  // convert string to int using std::stoi( str )

		  leftHandSide = rightHandSide + 1;
		  rightHandSide = row.find(",", leftHandSide);
		  degreeProgramTemp = row.substr(leftHandSide, rightHandSide - leftHandSide);

		  if (degreeProgramTemp == "SECURITY") {
				program = SECURITY;
		  }
		  if (degreeProgramTemp == "NETWORK") {
				program = NETWORK;
		  }
		  if (degreeProgramTemp == "SOFTWARE") {
				program = SOFTWARE;
		  }

		  //add the students to the roster, objects for each student class will be created in ADD method
		  add(studentIDTemp, firstNameTemp, lastNameTemp, emailAddressTemp, ageTemp, courseDays1Temp, courseDays2Temp, courseDays3Temp, program);

		  //cout << studentIDTemp << " " << firstNameTemp << " " << lastNameTemp << " " << emailAddressTemp << " " << ageTemp << " ";
		  //cout << courseDays1Temp << " " << courseDays2Temp << " " << courseDays3Temp << " " << program << " " << endl << endl;

} 



int main() {

	 int numStudents = 5;

	 const string studentData[] = {
		  "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		  "A5,Sara,Carlile,scarl51@wgu.edu,38, 34, 58, 56 ,SOFTWARE" };

    //Print the course title, the programming language used, your student ID, and your name.
	 cout << "Scripting and Programming - Applications – C867" << endl;
	 cout << "Programming language: C++" << endl;
	 cout << "Student ID: #001106597" << endl;
	 cout << "Sara Carlile" << endl << endl << endl;

	 // Create an instance of the Roster class called classRoster.
	 Roster * classRoster = new Roster(numStudents);

	 //build classRosterArray in classRoster class to store student data
	 for (int i = 0; i < numStudents; i++) {
		  classRoster->parseThenAdd(studentData[i]);
	 }
  	
	 //print classRosterArray
	 classRoster->printAll();


	 return 0;
}