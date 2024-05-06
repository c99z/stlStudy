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

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	v2.push_back(456);
	v2.push_back(486);
	v2.push_back(46);
	v2.push_back(496);



	cout << "交换前： " << endl;
	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;
	cout << v1.capacity() << endl;
	cout << v2.capacity() << endl;

	cout << "交换后： " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;
	cout << v1.capacity() << endl;
	cout << v2.capacity() << endl;//容积也交换了

}

int main() {

	test01();

	system("pause");

	return 0;
}