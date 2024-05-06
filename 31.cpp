#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	//取两个里面较小的值给目标容器开辟空间
	vTarget.resize(min(v1.size(), v2.size()));

	//返回目标容器的最后一个元素的迭代器地址
	vector<int>::iterator itEnd =
		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint());
	cout << endl;
	for_each(vTarget.begin(), itEnd, myPrint());//起始可以用自己的迭代器，但是结束必须用别人返回的迭代器，不然会多输出一些0，因为目标容器开辟的空间可能会大（两个集合的交集小于等于任意一个集合）
	cout << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}