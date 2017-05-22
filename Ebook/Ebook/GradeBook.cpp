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
	// Validate the name selection
	if (name.length() <= 25)
	{
		courseName = name; // Store course name in object
	}
	else 
	{
		courseName = name.substr(0, 25);
		cout << "Course name exceeds length limit. Only first 25 characters were stored.\n" << endl;
	}
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

// Get class average
void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	int average;

	total = 0;
	gradeCounter = 1;

	while (gradeCounter <= 10)
	{
		cout << "Enter grade: ";
		cin >> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;
	}

	average = total / 10;

	cout << "\nTotal of all 10 grades is: " << total << endl;
	cout << "Class average is: " << average << endl;

}