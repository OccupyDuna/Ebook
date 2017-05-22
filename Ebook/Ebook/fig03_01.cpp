// Fig. 3.1
// Define class GradeBook with a member function displayMessage
// create a GradeBook object, and call its diaplayMessage function.
#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// Display Welcome message
	void displayMessage()
	{
		cout << "Welcome to the Grade Book!" << endl;
	} 
	
};

int main()
{
	GradeBook myGradeBook; // create a GradeBook Object named myGradeBook
	myGradeBook.displayMessage(); // call object's displayMesssage function
} // end main