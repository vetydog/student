#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{
private:
	static int count;

	char firstname[25];
	char lastname[25];
	char fathername[25];

	struct Birthday
	{
		int date;
		int month;
		int year;
	};

	Birthday birthday;

	char mobilenumber[20];

	struct School
	{
		char schoolname[20];
		char country[20];
		char city[20];
	};

	School school;

	int groupnumber;

public:
	void setFirstname(const char* fn);
	void setLastname(const char* ln);
	void setFathername(const char* f);
	void setBirthday(int d,int m, int y);
	void setMobilenumber(const char* mn);
	void setSchoolinfo(const char* sn, const char* c, const char* co);
	void setGroupnumber(int gn);

	void showStudent();

	const char* getFirstname();
	const char* getLastname();
	const char* getFathername();
	Birthday getBirthday();
	const char* getMobilenumber();
	School getSchoolinfo();
	int getGroupnumber();
	int getCount();
	void saveToFile(string filename);
	void loadFromFile(string filename);
	void EditInfo(string filename);

	Student();
	~Student();
};
