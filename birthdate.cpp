#include <iostream>

using namespace std;

class Date{
	private:
		int month;
		int day;
		int year;
	public:
	Date(int m, int d, int y){
		setMonth(m);
		setDay(d);
		setYear(y);
	}
	void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            cout << "Invalid month value. Setting month to 1." << endl;
            month = 1;
        }
    }
	int getMonth() const {
	return month;
	}
	void setDay(int d){
		day=d;
	}
	int getDay() const {
	return day;
	}
	void setYear(int y){
		year=y;
	}
	int getYear() const {
	return year;
	}
	void displayDate() const{
	cout<< month << "/" << day << "/" << year << endl;
	}
};
int main()
{
	Date Benimki(8,30,2002); //Testing...
	
	cout <<"This date:";
	Benimki.displayDate();
	Benimki.setMonth(32);
	Benimki.setDay(21);
	Benimki.setYear(2023);
	
	cout << "Updated date:";
	Benimki.displayDate();
	return 0;
}
