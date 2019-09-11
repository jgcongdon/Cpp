#pragma once
#include <string>
#include "student.h"
class SecurityStudent : public Student
{
    public:
    SecurityStudent();
    SecurityStudent(
        string studentID,
        string firstName,
        string lastName,
        string emailAddress,
        int age,
        int daysCourse[],
        Degree degree
        );
        
    Degree getDegree();
    void print();
    
    ~SecurityStudent();
};
