#include <iostream>
#include <string>
using namespace std;
#include <list>


class Person
{
public:
	Person(std::string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
	std::string m_name;
	int m_age;
	int m_height;
};

void listPrint(const list<Person> &l)
{	
	cout << "姓名" << " " << "年龄" << " " << "身高" << " " << endl;
	for (list<Person>::const_iterator it=l.begin(); it != l.end(); it++)
	{
		cout << it->m_name << " " << it->m_age << " " << it->m_height << " ";
		cout << endl;
	}
	cout << endl;
}

void test01()
{
	Person p1("张三", 18, 180);
	Person p2("李四", 19, 175);
	Person p3("王五", 20, 192);

	list<Person>L1;

	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);

	listPrint(L1);

	



}

int main()
{
	test01();

	system("pause");
	return 0;
}