#include <set>
#include <iostream>
using namespace std;
#include <string>

//set和multiset区别
void test01()
{
	set<int> s;
	
	pair<set<int>::iterator, bool>  ret = s.insert(10);//pair对组 一种结构，该结构提供了将两个对象视为单个对象的的功能，在这里面就是插到哪了，插成功了吗
	if (ret.second) //取第二个数据
	{
		cout << "第一次插入成功!" << endl;
	}
	else {
		cout << "第一次插入失败!" << endl;
	}

	ret = s.insert(10);
	if (ret.second) {
		cout << "第二次插入成功!" << endl;
	}
	else {
		cout << "第二次插入失败!" << endl;
	}

	//multiset
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}