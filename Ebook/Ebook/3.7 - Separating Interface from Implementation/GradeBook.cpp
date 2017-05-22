// Fig 3.12
// GradeBook member-function defintions. This file contains 
// implementation 0f the member functions prototyped in GradeBook.h;

#include <iostream>
#include "GradeBook.h"
using namespace std;

//Constructor initalizes courseName with String supplied as argument
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

// Set courseName
void GradeBook::setCourseName(string name)
{
	courseName = name; // Store course name in object
}

// Get courseName
string GradeBook::getCourseName()
{
	return courseName; // store the course name in the object
}

// Display Welcome message
void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}
