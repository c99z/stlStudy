
#include <iostream>
using namespace std;
#include <string>
#include <map>;
class Person
{
public:
	Person(string name,int age)
	{
		this->m_age = age;
		this->m_name = name;
	}

	string m_name;
	int m_age;



};

class MyCompare
{
public:
	bool operator()(Person& p1, Person& p2)//从小到大排
	{
		return p1.m_age > p2.m_age;
	}
};

void test01()
{

	Person p1("张三",20);
	Person p1("李四",20);
	Person p1("王五",20);


	map<int, Person>m1 ;


}

int main() {

	test01();

	system("pause");

	return 0;
}