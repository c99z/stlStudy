#include <functional>//需要包含头文件
#include <iostream>
using namespace std;

//negate 取反仿函数
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}

//plus  加法仿函数
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

int main() {

	test01();
	test02();

	system("pause");

	return 0;
}