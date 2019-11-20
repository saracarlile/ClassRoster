#pragma once
#include <string>
#include "student.h"

// NetworkStudent is a type of student, so it inherits from the Student class

class NetworkStudent : public Student {

public:
	 //empty constructor and constructor with parameters
	 NetworkStudent();
	 NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int courseDays[], Degree program);

	 //virtual methods from Student class are overriden here in StudentSecurity class

	 Degree GetDegreeProgram();
	 void print();

	 //destructor
	 ~NetworkStudent();
};