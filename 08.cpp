#include <deque>
#include <iostream>
#include <string>
using namespace std;


void printDeque(const deque<int>& d)//const����ֻ��
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//��Ҫһ��ֻ���ĵ�����
	{
		//*it = 100;//�������ֵ�Ͳ������޸���
		cout << *it << " ";

	}
	cout << endl;
}
//deque����
void test01() {

	deque<int> d1; //�޲ι��캯��
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int> d2(d1.begin(), d1.end());//���丳ֵ
	printDeque(d2);

	deque<int>d3(10, 100);//10��100
	printDeque(d3);

	deque<int>d4 = d3;//��������
	printDeque(d4);
}

int main() {

	test01();

	system("pause");

	return 0;
}