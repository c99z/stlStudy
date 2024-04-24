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
	
	L1.insert(++it2, 60);//list的迭代器是支持++和--操作的（前后缀都支持），但是不支持 + 和 - 操作，因为链表不能进行随机访问操作，只能O(n)查询。
	listPrint(L1);
	
	//可以用下列方式
	list<int>::iterator it3 = L1.begin();
	for (int i = 0; i < 4; i++)
	{
		it3++;
	}
	L1.insert(it3, 1800); 
	listPrint(L1);

	L1.remove(1800);//remove会删除所有1800
	listPrint(L1);
}


int main()
{
	test01();

	system("pause");
	return 0;
}
