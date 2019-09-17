#include <iostream>
#include "securityStudent.h"
#include <string>
using namespace std;

Degree securityStudent::getDegree()
{
	return degree;
}

//securityStudent::securityStudent() :Student()
//{
//
//}
//
//securityStudent::securityStudent(
//	string ID,
//	string firstName,
//	string lastName,
//	string emailAddress,
//	int age,
//	int* daysCourse,
//	Degree degreeType)
//	: Student(ID, firstName, lastName, emailAddress, age, daysCourse)
//{
//	this->degree = degreeType;
//}
//
//void securityStudent::print()
//{
//	this->Student::print();
//}
