//
//  student.cpp
//  C867 - Sierra Scott
//
//  Created by Sierra Scott on 10/27/20.
//
#include "degree.h"
#include "student.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

Student::Student() /*Empty constructor*/
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    for (int i = 0; i < daysInCourseArraySize; i++) this->daysInCourse[i] = 0;
    this->degreeProgram = DegreeProgram::SECURITY;
}
Student::Student ( string studentID, string firstName, string lastName, string emailAddress, int age,
    int daysInCourse[],
    DegreeProgram degreeProgram) /*Full constructor*/
{
    
this->studentID = studentID;
this->firstName = firstName;
this->lastName = lastName;
this->emailAddress = emailAddress;
this->age = age;
for (int i = 0; i < daysInCourseArraySize; i++) this->daysInCourse[i] = daysInCourse[i];
    this->degreeProgram = degreeProgram;
}

//The destructor
Student::~Student(){};

//Getters
string Student::getstudentID()
{
    return this->studentID;
}
string Student::getfirstName()
{
    return this->firstName;
}

string Student::getlastName()
{
    return this->lastName;
}

string Student::getemailAddress()
{
    return this->emailAddress;
}

int Student::getage()
{
    return this->age;
}

int* Student::getdaysInCourse()
{
    return this->daysInCourse;
}
DegreeProgram Student::getdegreeProgram()
    {
        return this->degreeProgram;
}

//Setters
void Student::setstudentID(string studentID)
{
    this->studentID = studentID;
}

void Student::setfirstName(string firstName)
{
    this->firstName = firstName;
}

void Student::setlastName(string lastName)
{
    this->lastName = lastName;
}

void Student::setemailAddress(string emailAddress)
{
    this->emailAddress = emailAddress;
}

void Student::setage(int age)
{
    this->age = age;
}

void Student::setdaysInCourse(int daysInCourse[])
{
     for (int i = 0; i < daysInCourseArraySize; i++)
          this->daysInCourse[i] = daysInCourse[i];
    }
void Student::setDegreeProgram(DegreeProgram degreeProgram)
{
    this->degreeProgram  = degreeProgram;
}
void Student::printHeader()
{
    cout << "ID | First | Last | Age | Days | Degree\n";
}
void Student::print()
{
    cout << studentID << '\t';
    cout << firstName << '\t';
     cout << lastName << '\t';
     cout << age << '\t';
    cout << daysInCourse[0] << "," << daysInCourse[1] << "," << daysInCourse[2]
        << '\t';
    cout << degreeProgramStr[degreeProgram] << "\n";

}
