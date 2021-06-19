#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<Windows.h>
using namespace std;
#include<string>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void show()
	{
		cout << this->m_name << " " << this->m_age << endl;
	}
	string m_name;
	int m_age;

};

int main()
{
	Person p("ÕÅÈý", 10);
	p.show();
	system("pause");
	return 0;
}