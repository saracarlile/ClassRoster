#pragma once
#include <string>
using std::string;
#include "degree.h"


class Student {

public:
	 const static int courseDaysArraySize = 4;

protected:
	 string studentID;
	 string firstName;
	 string lastName;
	 string emailAddress;
	 int age;
	 int courseDays[courseDaysArraySize];
	 Degree program;

public:
	 Student();  //empty constructor
	 Student(string studentID, string firstName, string lastName, string emailAddress, int age, int coureDays[]); //constructor with parameters

	 string GetStudentID();
	 string GetFirstName();
	 string GetLastName();
	 string GetEmailAddress();
	 int GetAge();
	 int* GetCourseDays();
	 

	 void SetID(string studentID);
	 void SetFirstName(string firstName);
	 void SetEmailAddress(string emailAddress);
	 void SetAge(int age);
	 void SetCourseDays(int courseDays[]);

	 virtual void print() = 0; //virtual method print student data

	 virtual Degree GetDegreeProgram() = 0;  //Student class virtual class cannot make student object

	 //The descructor
	 ~Student();

};
