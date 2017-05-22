/* Fig 3.7
Initiating multiple objects of the GradeBook class and using
the GradeBook constructor to specify they course name 
when each GradeBook object is created.
*/
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

int main()
{
	//Create GradeBook objects
	GradeBook gradeBook1("CS101");
	GradeBook gradeBook2("CS102");

	//display the value fo courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
} // end main