#include "Student.h"

Student::Student()
{
	name = new char[100];
	strcpy_s(name, 99, "�����");
	surname = new char[100];
	strcpy_s(surname, 99, "���������");
	patronymic = new char[100];
	strcpy_s(patronymic, 99, "����������");
	day = 29;
	month = 3;
	year = 1996;
	adress = new char[100];
	strcpy_s(adress, 99, "�.������, ��.������������ 3");
	phone_number = 995059028;
	credits = new int[10];
	for (int i = 0; i < 10; i++)
	{
		credits[i] = rand() % 3 + 8;
	}
	curse_work = new int[10];
	for (int i = 0; i < 10; i++)
	{
		curse_work[i] = rand() % 3 + 8;
	}
	exams = new int[10];
	for (int i = 0; i < 10; i++)
	{
		exams[i] = rand() % 3 + 8;
	}
	
}

Student::Student(const char* name, const char* surname, const char* patronymic, int day, int month, int year,
	const char* adress, int phone_number, int* credits, int* curse_work, int* exams)
{
	this->name = new char[100];
	strcpy_s(this->name, 99, name);
	this->surname = new char[100];
	strcpy_s(this->surname, 99, surname);
	this->patronymic = new char[100];
	strcpy_s(this->patronymic, 99, patronymic);
	this->day = day;
	this->month = month;
	this->year = year;
	this->adress = new char[100];
	strcpy_s(this->adress, 99, adress);
	this->phone_number = phone_number;
	this->credits = new int[10];
	for (int i = 0; i < 10; i++)
	{
		this->credits[i] = credits[i];
	}
	this->curse_work = new int[10];
	for (int i = 0; i < 10; i++)
	{
		this->curse_work[i] = curse_work[i];
	}
	this->exams = new int[10];
	for (int i = 0; i < 10; i++)
	{
		this->exams[i] = exams[i];

	}
}

Student::Student(const Student& original)
{
	name = new char[100];
	strcpy_s(name, 99, original.name);
	surname = new char[100];
	strcpy_s(surname, 99, original.surname);
	patronymic = new char[100];
	strcpy_s(patronymic, 99, original.patronymic);
	day = original.day;
	month = original.month;
	year = original.year;
	adress = new char[100];
	strcpy_s(adress, 99, original.adress);
	phone_number = original.phone_number;
	credits = new int[10];
	for (int i = 0; i < 10; i++)
	{
		credits[i] = original.credits[i];
	}
	curse_work = new int[10];
	for (int i = 0; i < 10; i++)
	{
		curse_work[i] = original.curse_work[i];

	}
	exams = new int[10];
	for (int i = 0; i <10; i++)
	{
		exams[i] = original.exams[i];
	}
}

Student::~Student()
{
	if (name != nullptr) delete[] name;
	if (surname != nullptr) delete[] surname;
	if (patronymic != nullptr) delete[] patronymic;
	if (adress != nullptr) delete[] adress;
	if (credits != nullptr) delete[] credits;
	if (curse_work != nullptr) delete[] curse_work;
	if (exams != nullptr) delete[] exams;
}

void Student::Set_name(const char* name)
{
	this->name = new char[100];
	strcpy_s(this->name, 99, name);
}

char Student::Get_name() const
{
	return *name;
}

void Student::Set_surname(const char* surname)
{
	this->surname = new char[100];
	strcpy_s(this->surname, 99, surname);
}

char Student::Get_surname() const
{
	return *surname;
}

void Student::Set_patronymic(const char* patronymic)
{
	this->patronymic = new char[100];
	strcpy_s(this->patronymic, 99, patronymic);
}

char Student::Get_patronymic() const
{
	return *patronymic;
}

void Student::Set_day(int day)
{
	if (day > 0 && day < 32)
	{
		this->day = day;
	}
	else
	{
		throw "OOPS!";
	}
}

int Student::Get_day() const
{
	return day;
}

void Student::Set_month(int month)
{
	if (month > 0 && month < 13)
	{
		this->month = month;
	}
	else
	{
		throw "OOPS";
	}
}

int Student::Get_month() const
{
	return month;
}

void Student::Set_year(int year)
{
	if (year > 1995 && year < 2022)
	{
		this->year = year;
	}
	else
	{
		throw "OPPS!";
	}
}

int Student::Get_year() const
{
	return year;
}

void Student::Set_adress(const char* adress)
{
	this->adress = new char[100];
	strcpy_s(this->adress, 99, adress);
}

char Student::Get_adress() const
{
	return *adress;
}

void Student::Set_phone_number(int phone_number)
{
	if (phone_number >= 100000000)
	{
		this->phone_number = phone_number;
	}
	else
	{
		throw "OOPS!";
	}
}

int Student::Get_phone_number() const
{
	return phone_number;
}

void Student::Set_credits()
{
	int a;
	for (int i = 0; i < 10; i++)
	{
		cout << "������� �������� �� �����: ";
		cin >> a;
		this->credits[i] = a;
	}
}

void Student::Get_credits()
{
	for (int i = 0; i < 10; i++)
	{
		cout << this->credits[i] << " ";
		
	}
}

void Student::Set_curse_work()
{
	int a;
	for (int i = 0; i < 10; i++)
	{
		cout << "������� �������� ������ �������� ������: ";
		cin>> a;
		this->curse_work[i] = a;
	}
}

void Student::Get_curse_work()
{
	for (int i = 0; i < 10; i++)
	{
		cout << this->curse_work[i] << " ";
	}
}

void Student::Set_exams()
{
	int a;
	for (int i = 0; i < 10; i++)
	{
		cout << "������� ������ �� �������: ";
		cin >> a;
		this->exams[i] = a;
	}
}

void Student::Get_exams()
{
	for (int i = 0; i < 10; i++)
	{
		cout << this->exams[i] << " ";
	}
}

void Student::Show()
{
	cout << "----------------------------------" << endl;
	cout << "���������� �� ��������: " << endl;
	cout << "���: " << name << endl;
	cout << "�������: " << surname << endl;
	cout << "��������: " << patronymic << endl;
	cout << "���� ��������: " << Get_day() << "." << Get_month() << "." << Get_year() << endl;
	cout << "�����: " << adress << endl;
	cout << "����� ��������: " << Get_phone_number() << endl;
	cout << "������ ��������: ";
	Get_credits();	
	cout << "\n������ �� �������� ������: ";
	Get_curse_work();
	cout << "\n������ �� ��������: ";
	Get_exams();
	cout << "\n";
}


//Group::Group()
//{
//	count_of_student = 0;
//	student = new Student[count_of_student];
//	name_of_group = new char[100];
//	strcpy_s(name_of_group, 99, "���������");
//	specialization = new char[100];
//	strcpy_s(specialization, 99, "��������� � �����������");
//	course = 3;
//}

//Group::Group(int count_of_student)
//{
//	if (count_of_student < 0)
//	{
//		throw "OPPS!";
//	}
//	else
//	{
//		this->count_of_student = count_of_student;
//	}
//	student = new Student[this->count_of_student];
//	name_of_group = new char[100];
//	strcpy_s(name_of_group, 99, "���������");
//	specialization = new char[100];
//	strcpy_s(specialization, 99, "��������� � �����������");
//	course = 3;
//}
