#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// Constructor
	GradeBook(string name)
	{
		setCourseName(name);
	}
	// Set courseName
	void setCourseName(string name)
	{
		courseName = name; // Store course name in object
	}

	// Get courseName
	string getCourseName()
	{
		return courseName; // store the course name in the object
	}

	// Display Welcome message
	void displayMessage()
	{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
	}
private:
	string courseName; // course name for this GradeBook
};
