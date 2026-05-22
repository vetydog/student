#include "Student.h"
using namespace std;

int main() {
	Student s,s2;
	s.setFirstname("Ivan");
	s.setLastname("Boyko");
	s.setFathername("Ivanovich");
	s.setBirthday(12, 6, 2020);
	s.setMobilenumber("+380678341");
	s.setSchoolinfo("Itstep", "Kiev", "Ukraine");
	s.setGroupnumber(34353);
	s.showStudent();
	cout << s.getFathername()<<endl;
	s.getBirthday();

	cout << s.getCount() << endl;

	s.saveToFile("students.txt");

	s2.loadFromFile("students.txt");
	s2.showStudent();
	s2.EditInfo("student.txt");
	s2.showStudent();
}