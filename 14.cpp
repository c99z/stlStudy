#include <iostream>
using namespace std;
#include <list>

void listPrint(list<int>& L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
		
	}
	cout << endl;
}

void test01()
{
	list<int>L1;
	//L1.push_back(10);
	//L1.push_back(20);
	//L1.push_back(30);
	//L1.push_back(15);
	//L1.push_back(26);
	//L1.push_back(50);

	for (int i  = 10;i<120;i+=rand()%40)
	{
		L1.push_back(i);
		
	}
	listPrint(L1);
	L1.reverse();
	listPrint(L1);
	L1.sort();
	listPrint(L1);

}

int main()
{
	test01();

	system("pause");
	return 0;
}