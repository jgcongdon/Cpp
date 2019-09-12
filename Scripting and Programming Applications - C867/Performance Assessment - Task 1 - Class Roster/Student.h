#pragma once
#include <string>
#include "degree.h"
using std::string;


class Student {


public:
const static int daysCourseArraySize = 3;


protected:
string studentID;
string firstName;
string lastName;
string emailAddress;
int age;
int daysCourse[daysCourseArraySize];
Degree dtype;


public:
Student();
student (string ID, string firstName, string lastName, string emailAddress,
	   int age, int daysCourse[]);


string getID();
string getFirstName();
string getLastName();
string getEmailAddress();
int getAge();
int* getDaysCourse();
virtual Degree getDegree() = 0;


void setID(string ID);
void setFirstName(string firstName);
void setLastName(string lastName);
void setEmailAddress(string emailAddress);
void setAge(int age);
void setDaysCourse(int daysCourse[]);

virtual void print() = 0;


~student();


};
