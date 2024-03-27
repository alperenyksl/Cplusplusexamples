#include <iostream>

using namespace std;

class student{
	public:
		string name;
		void tellName()
		{
			cout << "Benim adim:" << name << endl;
		}
};
class Employee{
	private:
		string name;
		int id;
		int salary;
	public:
		void setsetings(string isim, int idd, int salarry)
		{
			name= isim;
			id= idd;
			salary=salarry;
		}

		
};
int main()
{
	student student1;
	student student2;
	student1.name="Mustafa Murat";
	student2.name="Oguz";
	cout << "Ogrenci 1 ismi:" << student1.name << endl;
	cout << "Ogrenci 2 ismi:" << student2.name << endl;
	student1.tellName();
	student2.tellName();
	Employee employee; 
	employee.setsetings("Mustafa Ahmet", 41, 5000);
	return 0;
}
