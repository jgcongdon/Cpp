#include <iostream>
#include "networkStudent.h"
#include <string>
using namespace std;

Degree networkStudent::getDegree()
{
	return degree;
}

//networkStudent::networkStudent() :Student()
//{
//	
//}
//
//networkStudent::networkStudent(
//	string ID,
//	string firstName,
//	string lastName,
//	string emailAddress,
//	int age,
//	int* daysCourse,
//	Degree degreeType)
//	:Student(ID, firstName, lastName, emailAddress, age, daysCourse)
//{
//	this->degree = degreeType;
//}
//
//void networkStudent::print()
//{
//    this->Student::print();
//}