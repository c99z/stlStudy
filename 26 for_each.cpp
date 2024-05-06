#include <vector>
#include <iostream>
using namespace std;
#include <algorithm>

void print01(int val)
{
	cout << val << " ";
}

class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator  it=v.begin();
	vector<int>::iterator  it2 = v.end();

	for_each(it,it2,print01);
	//for_each(v.begin(), v.end(), print01);
	
	cout << endl;
	for_each(it, it2, print02());


 }


int main() {

	test01();


	system("pause");

	return 0;
}