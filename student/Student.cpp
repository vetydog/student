#include "Student.h"
#include <cstring>

void Student::setFirstname(const char* fn) {
	strcpy_s(firstname, 25, fn);
}

void Student::setLastname(const char* ln) {
	strcpy_s(lastname, 25, ln);
}
void Student::setFathername(const char* f) {
	strcpy_s(fathername, 25, f);

}

void Student::setBirthday(int d, int m, int y) {
	birthday.date = d;
	birthday.month = m;
	birthday.year = y;
}

void Student::setMobilenumber(const char* mn) {
	strcpy_s(mobilenumber, 20, mn);
}

void Student::setSchoolinfo(const char* sn, const char* c, const char* co) {
	strcpy_s(school.schoolname, 20, sn);
	strcpy_s(school.city, 20, c);
	strcpy_s(school.country, 20, co);
}

void Student::setGroupnumber(int gn) {
	groupnumber = gn;
}

void Student::showStudent() {
	cout << "fistname: " << firstname << endl;
	cout << "lastname: " << lastname << endl;
	cout << "fathername: " << fathername << endl;
	cout << "Birthday: " << birthday.date <<" " << birthday.month<<" "<< birthday.year << endl;
	cout << "Mobilenumber: " << mobilenumber << endl;
	cout<<"Schoolinfo: " << school.schoolname << " " << school.city << " " << school.country << endl;
	cout << "Groupnumber: " << groupnumber<< endl;
}

const char * Student::getFirstname() {
	return firstname;
}
const char* Student::getLastname() {
	return lastname;
}
const char* Student::getFathername() {
	return fathername;
}
Student::Birthday Student::getBirthday() {
	return birthday;
}
const char* Student::getMobilenumber() {
	return mobilenumber;
}
Student::School Student::getSchoolinfo() {
	return school;
}
int Student::getGroupnumber() {
	return groupnumber;
}