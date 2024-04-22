#include <iostream>
using namespace std;
#include <list>

void listPrint(const list<int> &l)
{
	for (list<int>::const_iterator it=l.begin();it!=l.end() ; it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);
	listPrint(L1);
	list<int>::iterator it2 = L1.begin();
	L1.insert(++it2, 60);
	listPrint(L1);

}


int main()
{
	test01();

	system("pause");
	return 0;
}
