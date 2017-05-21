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
	GradeBook gradeBook1("CS101");
	GradeBook gradeBook2("CS102");

	//display the value fo courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
} // end main
