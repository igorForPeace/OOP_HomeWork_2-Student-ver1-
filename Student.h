#pragma once
#include "ALL_libraries.h"



class Student
{
private:
	char* name;
	char* surname;
	char* patronymic;
	int day;
	int month;
	int year;
	char* adress;
	int phone_number;
	int* credits;
	int* curse_work;
	int* exams;

public:
	Student();
	Student(const char* name, const char* surname, const char* patronymic, int day, int month, int year,
		const char* adress, int phone_number, int* credits, int* curse_work, int* exams);
	Student(const Student& original);
	~Student();

	void Set_name(const char* name);
	char Get_name() const;

	void Set_surname(const char* surname);
	char Get_surname() const;

	void Set_patronymic(const char* patronymic);
	char Get_patronymic() const;

	void Set_day(int day);
	int Get_day() const;

	void Set_month(int month);
	int Get_month() const;

	void Set_year(int year);
	int Get_year() const;

	void Set_adress(const char* adress);
	char Get_adress() const;

	void Set_phone_number(int phone_number);
	int Get_phone_number() const;

	void Set_credits();
	void Get_credits();

	void Set_curse_work();
	void Get_curse_work();

	void Set_exams();
	void Get_exams();

	void Show();





};

