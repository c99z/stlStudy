//#include <string>
//#include <iostream>
//using namespace std;
//#include <set>
//
//
//class  Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	
//
//	string m_name;
//	int m_age;
//
//};
//
////�趨�ȽϹ��򣬰�������ɴ�С
//bool comparePerson(const Person& p1, const Person& p2)
//{
//	if(p1.m_age>p2)
//}
//
//
//
//
//void test01()
//{
//
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}



#include <set>
#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};
class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const//����Ҫ��const
	{
		//���������������  ����
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	set<Person, comparePerson> s;

	Person p1("����", 23);
	Person p2("����", 27);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
	}
}
int main() {

	test01();

	system("pause");

	return 0;
}