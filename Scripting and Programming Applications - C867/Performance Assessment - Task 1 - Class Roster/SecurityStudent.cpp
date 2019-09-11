#include <iostream>
#include "SecurityStudent.h"
using std::cout;

SecurityStudent::SecurityStudent():Student()
{
    dtype = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysCourse[], Degree degree):Student(studentID, firstName, lastName, emailAddress, age, daysCourse)
{
    dtype = SECURITY;
}

Degree SecurityStudent::getDegree()
{
    return SECURITY;
}

void SecurityStudent::print()
{
    this->Student::print();
    cout << "SECURITY" << \n";
}

SecurityStudent::~SecurityStudent()
{
    Degree::~Degree();
}
