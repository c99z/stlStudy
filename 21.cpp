#include <map>
#include <iostream>
using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	//����
	map<int, int> m;
	//��һ�ֲ��뷽ʽ
	m.insert(pair<int, int>(1, 10));
	//�ڶ��ֲ��뷽ʽ
	m.insert(make_pair(2, 20));//��make pair���������飬����дģ�����
	//�����ֲ��뷽ʽ
	m.insert(map<int, int>::value_type(3, 30));//�Ƚ��鷳
	//�����ֲ��뷽ʽ
	m[4] = 40;
	printMap(m);
	//pair<int,int> a=make_pair(5, 50);
	
	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//���
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main() {

	test01();

	system("pause");

	return 0;
}