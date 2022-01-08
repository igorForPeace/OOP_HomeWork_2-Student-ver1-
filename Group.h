#pragma once
#include "ALL_libraries.h"
#include "Student.h"

class Group
{
private:
	int count_of_student;
	Student* student;
	char* name_of_group;
	char* specialization;
	int course;
public:
	Group();
	Group(int count_of_student);
	Group(int count_of_student, const char* name_of_group, const char* specialization);
	Group(const Group& original);
	~Group();

};

