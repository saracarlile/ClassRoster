#pragma once
#include <string>
#include <iostream>
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

// Roster stores a collection of Students
class Roster {
private:
	 int lastIndex;//index of last student in roster, also affects how many entries are in roster
	 int capacity; //the max size of the roster
	 Student** classRosterArray; // classRosterArray is an array of points to students, indicated by **

public:
	 Roster(); // empty constructor creates roster and initializes default values
	 Roster(int capacity);//this constructor creates roster, initializes default values, and sets max size

	 Student* getStudentAt(int index);
	 bool checkNumStudents(int numStudents);
	 void parseThenAdd(string row); //parses the strings, creates the Student objects, and adds them to roster
	 void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
		  int daysInCourse2, int daysInCourse3, Degree program); //  sets the instance variables and updates the roster.
	 void remove(string studentID); //removes students from the roster by student ID. If the student ID does not exist, the function prints student was not found.
	 void printAll(); //loop through classRosterArray and call the print() function for each student.
	 void printAverageDaysInCourse(string studentID); // prints a student’s average number of days in the three courses. 
	 void printInvalidEmails(); /*verifies student email addresses and displays all invalid email addresses to the user
			A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').*/
	 void printByDegreeProgram(int degreeProgram); //prints out student information for a degree program specified by an enumerated type
	 ~Roster(); //Descructor destroys the roster, releasing any resources it requested dynamically
}; 
