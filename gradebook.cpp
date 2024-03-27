#include <string>
#include <iostream>

using namespace std;
class GradeBook{
	public:
	explicit GradeBook (string m,string n)
	{
		setCourseName (m);
		setInstructorsName(n);
		
	}
	void setCourseName (string m){
		courseName=m;
	}
	string getCourseName() const{
	return courseName;
	}
	void displayMessage() const{
	cout << "Welcome to " << getCourseName() << "course"<<endl;
	cout << "This course is presented by:" << getInstructorsName() << endl;
	}
	void setInstructorsName(string n){
		instructorsName=n;
	}
	string getInstructorsName() const
	{
	return instructorsName;
	}
	private:
	string courseName;
	string instructorsName;
};
int main() 
{
    GradeBook myGradeBook("Programming ", "Alperen");
    myGradeBook.displayMessage();

    return 0;
}

