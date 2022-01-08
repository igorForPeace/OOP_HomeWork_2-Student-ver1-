#include "Group.h"
#include "Student.h"

Group::Group()
{
	count_of_student = 0;
	student = new Student[count_of_student];
	name_of_group = new char[100];
	strcpy_s(name_of_group, 99, "Избранные");
	specialization = new char[100];
	strcpy_s(specialization, 99, "Маркетинг и мененджмент");
	course = 3;
}

Group::Group(int count_of_student)
{

	if (count_of_student < 0)
	{
		throw "OPPS!";
	}
	else
	{
		this->count_of_student = count_of_student;
	}
	student = new Student[this->count_of_student];
	name_of_group = new char[100];
	strcpy_s(name_of_group, 99, "Избранные");
	specialization = new char[100];
	strcpy_s(specialization, 99, "Маркетинг и мененджмент");
	course = 3;
}

Group::Group(int count_of_student, const char* name_of_group, const char* specialization)
{
	if (count_of_student < 0)
	{
		throw "OPPS!";
	}
	else
	{
		this->count_of_student = count_of_student;
	}
	student = new Student[this->count_of_student];
	this->name_of_group = new char[100];
	strcpy_s(this->name_of_group, 99, name_of_group);
	this->specialization = new char[100];
	strcpy_s(this->specialization, 99, specialization);
	course = 3;
}

Group::Group(const Group& original)
{
	count_of_student = original.count_of_student;
	student = new Student[count_of_student];
	for (int i = 0; i < count_of_student; i++)
	{
		student[i] = original.student[i];
	}
	name_of_group = new char[100];
	strcpy_s(name_of_group, 99, original.name_of_group);
	specialization = new char[100];
	strcpy_s(specialization, 99, original.specialization);
	course = original.course;
}

Group::~Group()
{
	if (student != nullptr) delete[] student;
	if (name_of_group != nullptr) delete[] name_of_group;
	if (specialization != nullptr) delete[] specialization;
}