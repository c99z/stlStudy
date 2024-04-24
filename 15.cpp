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

/* 年龄相等按照身高降序排列,年龄不等按照年龄升序排列*/
bool myCompare(Person &p1,Person&p2)
{
	if (p1.m_age==p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	else
	{
		return p1.m_age < p2.m_age;
	}
}
void test01()
{
	Person p1("张三", 18, 180);
	Person p2("李四", 26, 175);
	Person p3("王五", 26, 192);
	Person p4("王六", 20, 191);
	Person p5("贺五", 26, 174);
	Person p6("张五", 25, 190);
	list<Person>L1;

	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);


	listPrint(L1);

	//函数不能嵌套定义
	//bool myCompare(Person & p1, Person & p2)
	
	//bool ComparePerson(Person & p1, Person & p2)
	//{

	//	if (p1.m_Age == p2.m_Age)
	//	{
	//		return p1.m_Height > p2.m_Height;
	//	}
	//	else
	//	{
	//		return  p1.m_Age < p2.m_Age;
	//	}

	//}

	L1.sort(myCompare);//L1.sort(函数表达式）  自定规则

	listPrint(L1);

	



}

int main()
{
	test01();

	system("pause");
	return 0;
}