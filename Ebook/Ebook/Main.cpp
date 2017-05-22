/* Main
Include GradeBook.h header file into main
*/
#include <iostream>
#include <string>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

int main()
{
	//Create GradeBook objects
	GradeBook myGradeBook("CS101");

	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
} // end main
