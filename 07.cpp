#include <vector>
#include <iostream>
#include <string>
using namespace std;

void test01()
{
	vector<int> v;

	//预留空间，不预留空间要开辟30次
	v.reserve(100000);

	int num = 0;//统计开辟的次数
	int* p = NULL;//空指针
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "num:" << num << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}