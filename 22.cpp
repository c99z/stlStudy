//* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
//* 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
//* 随机给10名员工分配部门和工资
//* 通过multimap进行信息的插入  key(部门编号) value(员工)
//* 分部门显示员工信息
//
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