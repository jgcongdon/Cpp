#include<iostream>
#include<iomanip>
#include "student.h"
using std::cout;
using std::left;
using::setw;


student::student()
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    for (int i = 0; i < daysCourseArraySize; i++) this->daysCourse[i] = 0;
}


student::student(string ID, string firstName, string lastName, string emailAddress, int age, int daysCourse[])
{
    this->studentID = ID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < daysCourseArraySize; i++) this->daysCourse[i] = daysCourse[i];
}


string student::getID()
{
    return studentID;
}

string student::getFirstName()
{
    return firstName;
}

string student::getLastName()
{
    return lastName;
}

string student::getEmailAddress()
{
    return emailAddress;
}

int student::getAge()
{
    return age;
}

int * student::getDaysCourse()
{
    return daysCourse;
}


void student::setID(string ID)
{
    this->studentID = ID;
}

void student::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void student::setLastName(string lastName)
{
    this->lastName = lastName;
}

void student::setEmailAddress(string emailAddress)
{
    this->emailAddress = emailAddress;
}

void student::setAge(int age)
{
    this->age = age;
}

void student::setDaysCourse(int daysCourse[])
{
    for (int i = 0; i < daysCourseArraySize; i++)
    this->daysCourse[i] = daysCourse[i];
}


void student::print()
{
    cout << studentID;
    cout << firstName;
    cout << lastName;
    cout << emailAddress;
    cout << age;
    cout << daysCourse[0];
    cout << daysCourse[1];
    cout << daysCourse[2];
}

student::~student()
{
    
}
