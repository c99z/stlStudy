#include <functional>//��Ҫ����ͷ�ļ�
#include <iostream>
using namespace std;

//negate ȡ���º���
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}

//plus  �ӷ��º���
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