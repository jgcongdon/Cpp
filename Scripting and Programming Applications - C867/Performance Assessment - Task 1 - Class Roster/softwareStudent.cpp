#include <iostream>
#include "softwareStudent.h"
#include <string>
using namespace std;

Degree softwareStudent::getDegree()
{
	return degree;
}

//softwareStudent::softwareStudent() :Student()
//{
//
//}
//
//softwareStudent::softwareStudent(
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
//void softwareStudent::print()
//{
//	this->Student::print();
//}
