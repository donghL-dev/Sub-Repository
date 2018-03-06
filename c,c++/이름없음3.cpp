#include <iostream>
using namespace std;
class Student
{
public:
	string name;
	int sNo;// �й�
Student(const string& name_arg, int stdNumber);
~Student();
public:
// ���������
static int student_count;
static void PrintStdCount();
};

int Student::student_count = 0;
// ��������Լ�
void Student::PrintStdCount()
{
cout << "Student ��ü��= " << student_count << "\n";
}
Student::Student(const string& name_arg, int stdNumber)
{
// �л���ü�Ǽ���������Ų��.
student_count++;
name = name_arg;
sNo = stdNumber;
}
Student::~Student()
{
// �л���ü�Ǽ������ҽ�Ų��.
student_count--;
}
void Func()
{
Student std1("Bill", 342);
Student std2("James", 214);
Student::PrintStdCount();
}

int main()
{
Student::PrintStdCount();
Student std("Jeffrey", 123);
Student::PrintStdCount();
Func();
Student::PrintStdCount();
return 0;
}
