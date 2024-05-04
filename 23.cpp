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
	Person(string name, int money,int part)
	{
		this->m_money = money;
		this->m_name = name;
		this->m_part = part;

	}

	string m_name;
	int m_money;
	int m_part;



};
#define CEHUA 0;
#define MEISHU 1;
#define YANFA 2;//宏常量，凡是遇到前面的标识符都用后面的字符串代替

multimap<int, Person>m;

