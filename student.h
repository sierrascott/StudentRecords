//
//  student.h
//  C867 - Sierra Scott
//
//  Created by Sierra Scott on 10/27/20.
//

#pragma once
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include "degree.h"
using std::cout;

class Student // represents a student
{
public:
    const static int daysInCourseArraySize = 3;/* daysToComplete array will be size 3 */
    
private:
    
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[daysInCourseArraySize];
    DegreeProgram degreeProgram;
    
public:
    Student (); //empty constructor
    
    Student ( string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);
    
    
    //Accessors
    string getstudentID ();
    string getfirstName ();
    string getlastName ();
    string getemailAddress ();
    int getage ();
    int* getdaysInCourse ();
    DegreeProgram getdegreeProgram ();

    
    //Setters
    void setstudentID (string studentID);
    void setfirstName (string firstName);
    void setlastName (string lastName);
    void setemailAddress (string emailAddress);
    void setage (int age);
    void setdaysInCourse (int daysInCourse[]);
    void setDegreeProgram (DegreeProgram degreeProgram);
    
    static void printHeader();
    
    void print ();
    
    //The destructor
    ~Student ();
};
