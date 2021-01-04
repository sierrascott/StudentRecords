//
//  main.cpp
//  C867 - Sierra Scott
//
//  Created by Sierra Scott on 10/21/20.
//
#include "roster.h"
#include <string>
using std::endl;

Roster classRoster;

int main()
{
    cout << "Scripting and Programming - Applications - C867\n";
    cout << "Written in C++ by Sierra Scott\n";
    cout << "WGU ID: 001422244\n" << "\n";
    
    const string studentData[] = {
            "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
            "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
            "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
            "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
            "A5,Sierra,Scott,ssco366@wgu.edu,32,2,3,4,SOFTWARE"
        };
    

    const int numStudents = 5;
    Roster roster;
    for (int i = 0; i < numStudents; i++) roster.parse(studentData[i]);
    cout << "Displaying all students: " << std::endl;
    roster.printAll();
    cout << std::endl;
    
    
    cout << "Displaying students with invalid email addresses:" << std::endl;
    roster.printInvalidEmails();
    cout << std::endl;
  
    for (int i = 0; i < 1; i++){
    cout << "Displaying average number of days to complete courses: " << std::endl;
        roster.printAverageDays(roster.classRosterArray[i]->getstudentID());
    }
    
    for (int i = 0; i < 3; i++){
        cout << "Displaying by Degree Program: " << degreeProgramStr[i] << std::endl;
        roster.printByDegreeProgram((DegreeProgram)i);
    }
    
    
    cout << "Removing student with ID A3" << std::endl;
    roster.removeStudentByID("A3");
    cout << std::endl;
    
    cout << "Removing student with ID A3" << std::endl;
    roster.removeStudentByID("A3");
    cout << std::endl;
    
  
    return 0;
}
