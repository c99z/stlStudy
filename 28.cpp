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

	cout << "��תǰ�� " << endl;
	for_each(v.begin(), v.end(), myPrint());//��for_each�������
	cout << endl;
	myPrint2(v);//�Լ�д��ѭ����ӡ����

	cout << "��ת�� " << endl;

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