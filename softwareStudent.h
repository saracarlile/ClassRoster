#pragma once
#include <string>
#include "student.h"

// SoftwareStudent is a type of student, so it inherits from the Student class

class SoftwareStudent : public Student {

public:
	 //empty constructor and constructor with parameters
	 SoftwareStudent();
	 SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays[], Degree program);

	 //virtual methods from Student class are overriden here in StudentSecurity class

	 Degree GetDegreeProgram();
	 void print();

	 //destructor
	 ~SoftwareStudent();
};