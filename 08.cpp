#include <deque>
#include <iostream>
#include <string>
using namespace std;


void printDeque(const deque<int>& d)//const限制只读
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//需要一个只读的迭代器
	{
		//*it = 100;//容器里的值就不可以修改了
		cout << *it << " ";

	}
	cout << endl;
}
//deque构造
void test01() {

	deque<int> d1; //无参构造函数
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int> d2(d1.begin(), d1.end());//区间赋值
	printDeque(d2);

	deque<int>d3(10, 100);//10个100
	printDeque(d3);

	deque<int>d4 = d3;//拷贝构造
	printDeque(d4);
}

int main() {

	test01();

	system("pause");

	return 0;
}