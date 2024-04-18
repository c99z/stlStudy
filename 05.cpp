#include <iostream>
using namespace std;
#include <string>
#include <vector>

void  printVector(vector<int>& v)
{
	for (vector<int>::iterator it=v.begin(); it!=v.end(); it++)
	{
		cout << *it<< " ";
	}
	cout << endl;
}


void test02()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	printVector(v1);

	//vector<int>::iterator p = v1.begin();
	//int a = *p;
	//cout << a << endl;
}

int main()
{
	test02();//不要忘记带括号！！！！
	system("pause");
	return 0;
}

