#pragma once
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;



class networkStudent : public Student
{
private:
	Degree degree = NETWORK;

public:
	using Student::Student;
	Degree getDegree() override;

    /*networkStudent();
    networkStudent(
        string ID,
        string firstName,
        string lastName,
        string emailAddress,
        int age,
        int* daysCourse,
        Degree degreeType
        );
        
    Degree getDegree();
    void print();
    */
};