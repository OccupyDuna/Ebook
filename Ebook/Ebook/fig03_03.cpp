// Fig. 3.3
// Define class GradeBook with a member function that takes a paramter,
// create a GradeBook object, and call its diaplayMessage function.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// Display Welcome message
	void displayMessage( string courseName )
	{
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	} 
	
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook; // create a GradeBook Object named myGradeBook

	cout << "Please enter the course name:" << endl;
	getline(cin, nameOfCourse);
	cout << endl;

	myGradeBook.displayMessage( nameOfCourse); // call object's displayMesssage function
} // end main