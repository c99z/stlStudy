#include <set>
#include <iostream>
using namespace std;
#include <string>

//set��multiset����
void test01()
{
	set<int> s;
	
	pair<set<int>::iterator, bool>  ret = s.insert(10);//pair���� һ�ֽṹ���ýṹ�ṩ�˽�����������Ϊ��������ĵĹ��ܣ�����������ǲ嵽���ˣ���ɹ�����
	if (ret.second) //ȡ�ڶ�������
	{
		cout << "��һ�β���ɹ�!" << endl;
	}
	else {
		cout << "��һ�β���ʧ��!" << endl;
	}

	ret = s.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�!" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��!" << endl;
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