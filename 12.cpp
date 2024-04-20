#include <stack>
#include <iostream>
using namespace std;


void test01()
{
	stack<int>s;

	cout << typeid(s.empty()).name() << endl;//s.empty()是一个bool类型的数据
}

int main()
{
	test01();

	system("pause");
	return 0;
}