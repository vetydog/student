#include <iostream>
#include "Student.h"
using namespace std;

int main() {
	Student s;
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
	
}