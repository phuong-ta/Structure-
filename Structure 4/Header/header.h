#include <iostream>
#include <string>

using namespace std;

struct Student{
	int id;
	string name;
	float math, english, it, gpa=0.0;
};
void inputInfo(Student *st, int n);

void displayInfo(Student *st, int n);
