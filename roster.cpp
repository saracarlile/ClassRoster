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

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
	 int daysInCourse2, int daysInCourse3, Degree program) {

	 if (program == SECURITY ) {
		  int daysInCourse[Student::courseDaysArraySize]; //array size from Student class
		  daysInCourse[0] = daysInCourse1;
		  daysInCourse[1] = daysInCourse2;
		  daysInCourse[2] = daysInCourse3;

		  new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, program);
	 }
	 if (program == NETWORK) {
		  int daysInCourse[Student::courseDaysArraySize]; //array size from Student class
		  daysInCourse[0] = daysInCourse1;
		  daysInCourse[1] = daysInCourse2;
		  daysInCourse[2] = daysInCourse3;

		  new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, program);
	 }
	 if (program == SOFTWARE) {
		  int daysInCourse[Student::courseDaysArraySize]; //array size from Student class
		  daysInCourse[0] = daysInCourse1;
		  daysInCourse[1] = daysInCourse2;
		  daysInCourse[2] = daysInCourse3;

		  new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, program);
	 }
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
	 cout << "Scripting and Programming - Applications � C867" << endl;
	 cout << "Programming language: C++" << endl;
	 cout << "Student ID: #001106597" << endl;
	 cout << "Sara Carlile" << endl << endl << endl;

	 // Create an instance of the Roster class called classRoster.
	 Roster * classRoster = new Roster(numStudents);

	 // parse studentData and add each student to classRoster.
   
	 for (int i = 0; i < numStudents; i++) {
		  string temp1 = studentData[i];
		  cout << temp1 << endl;
		  cout << "Let's try this string splitter" << endl << endl << endl << endl;
		  // string::substr() and string::find(). 
		  //temp variables to store values during loop to build object
		  string studentIDTemp;
		  string lastNameTemp;
		  string emailAddressTemp;
		  int ageTemp;
		  int courseDays1Temp;
		  int courseDays2Temp;
		  int courseDays3Temp;
		  Degree programTemp;








	 }


	 return 0;
}