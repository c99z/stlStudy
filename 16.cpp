#include <set>
#include <iostream>
using namespace std;

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//����͸�ֵ
void test01()
{
	set<int> s1;

	s1.insert(10);//ֻ���ò���ķ�ʽ��û��β���ͷ��
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);//�����ʱ���Զ����򣬲���������ظ�ֵ
	cout << s1.size() << endl;
	//��������
	set<int>s2(s1);
	printSet(s2);

	s2.insert(60);
	s2.insert(70);
	cout << s2.size() << endl;
	cout << typeid(s2.empty()).name() << endl;
	swap(s1, s2);
	printSet(s1);//�����ʱ���Զ����򣬲���������ظ�ֵ
	printSet(s2);//�����ʱ���Զ����򣬲���������ظ�ֵ
	cout << s1.size() << endl;
	cout << s2.size() << endl;



	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet(s3);
}

int main() {

	test01();

	system("pause");

	return 0;
}