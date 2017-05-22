/* Fig 3.5
Define class GradeBook hat conains a courseName data member
and member functions to set and get its value;
Create and manipulate a Greadebook object with these functions.
*/
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
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

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook; // create a GradeBook Object named myGradeBook

	// display intitial value of courseName
	cout << "Initital course name is: " << myGradeBook.getCourseName() << endl;

	// Prompt for input and set course name
	cout << "\nPlease enter the course name:" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse); // set course name

	cout << endl;
	myGradeBook.displayMessage(); // call object's displayMesssage function
} // end main