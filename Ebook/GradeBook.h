#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// Constructor
	GradeBook(string);
	// Set courseName
	void setCourseName(string);
	// Get courseName
	string getCourseName();
	// Display Welcome message
	void displayMessage();
private:
	string courseName; // course name for this GradeBook
};
