#pragma once
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;



class securityStudent : public Student
{
private:
	Degree degree = SECURITY;

public:
	using Student::Student;
	Degree getDegree() override;
	
	/*securityStudent();
	securityStudent(
		string ID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int* daysCourse,
		Degree degreeType
	    );

	Degree getDegree();
	void print();*/

};
