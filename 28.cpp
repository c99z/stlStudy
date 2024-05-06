#include <algorithm>
#include <vector>
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

void myPrint2(const vector<int>& v)
{
	for ( vector<int>::const_iterator it=v.begin(); it < v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前： " << endl;
	for_each(v.begin(), v.end(), myPrint());//用for_each遍历输出
	cout << endl;
	myPrint2(v);//自己写的循环打印函数

	cout << "反转后： " << endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	myPrint2(v);

}

int main() {

	test01();

	system("pause");

	return 0;
}