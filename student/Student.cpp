#include "Student.h"
#include <cstring>
int Student::count=0;
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
	cout << "firstname: " << firstname << endl;
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
int Student::getCount() {
	return count;
}

void Student::saveToFile(string filename) {
	ofstream fout(filename);

	if (!fout) {
		cout << "Couldn't open" << endl;
		return;
	}

	fout << firstname << endl;
	fout << lastname << endl;
	fout << fathername << endl;

	fout << birthday.date << endl;
	fout << birthday.month << endl;
	fout << birthday.year << endl;

	fout << mobilenumber << endl;

	fout << school.city << endl;
	fout << school.country << endl;
	fout << school.schoolname << endl;

	fout << groupnumber << endl;

	fout.close();

	cout << "Saved!" << endl;
}

void Student::loadFromFile(string filename) {
	ifstream fin(filename);

	if (!fin) {
		cout << "Couldn't open" << endl;
		return;
	}

	fin.getline(firstname, 25);
	fin.getline(lastname, 25);
	fin.getline(fathername, 25);

	fin >> birthday.date;
	fin >> birthday.month;
	fin >> birthday.year;

	fin.ignore();

	fin.getline(mobilenumber, 25);

	fin.getline(school.city, 25);
	fin.getline(school.country, 25);
	fin.getline(school.schoolname, 25);

	fin >> groupnumber;

	fin.close();

	cout << "Loaded!" << endl;
}

void Student::EditInfo(string filename) {
	loadFromFile(filename);

	int choice;
	cout << "What do you want to edit?\n";
	cout << "1 - Name\n";
	cout << "2 - Birthday\n";
	cout << "3 - Mobile\n";
	cout << "4 - School\n";
	cout << "5 - Groupnumber\n";
	cout << "Choice: ";

	cin >> choice;
	cin.ignore();

	switch (choice) {
	case 1:
		cout << "New firstname: ";
		cin.getline(firstname, 25);

		cout << "New lastname: ";
		cin.getline(lastname, 25);

		cout << "New fathername: ";
		cin.getline(fathername, 25);
		break;

	case 2:
		cout << "New day: ";
		cin >> birthday.date;

		cout << "New month: ";
		cin >> birthday.month;

		cout << "New year: ";
		cin >> birthday.year;
		break;

	case 3:
		cout << "New mobile: ";
		cin.ignore();
		cin.getline(mobilenumber, 25);
		break;

	case 4:
		cout << "New City: ";
		cin.getline(school.city, 25);

		cout << "New Country: ";
		cin.getline(school.country, 25);

		cout << "New Schoolname: ";
		cin.getline(school.schoolname, 25);

	case 5:
		cout << "New groupnumber: ";
		cin >> groupnumber;
		break;

	default:
		cout << "Wrong!" << endl;
		return;
	}

	saveToFile(filename);
	cout << "Edited" << endl;
	}


Student::Student() {
	strcpy_s(firstname, "-");
	strcpy_s(lastname, "-");
	strcpy_s(fathername, "-");

	birthday.date = 0;
	birthday.month = 0;
	birthday.year = 0;

	strcpy_s(mobilenumber, "-");
	strcpy_s(school.city, "-");
	strcpy_s(school.country, "-");
	strcpy_s(school.schoolname, "-");

	groupnumber = 0;
	count++;
}
Student::~Student() {
	cout << "detructed";
	count--;
}
