#include "Student.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));

	Student Igor;
	Igor.Show();
	Student Vasa = Igor;
	Vasa.Set_name("Вася");
	Vasa.Show();
	return 0;
}