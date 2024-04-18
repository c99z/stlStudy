#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void MyPrint(int val)
{
	cout << val << endl;
}

void test01() {

	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ����ݵ�����
	vector<int> v;
	//�������з�����
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
	//v.begin()���ص����������������ָ�������е�һ������
	//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
	//vector<int>::iterator �õ�vector<int>���������ĵ���������

	vector<int>::iterator pBegin = v.begin();//pBegin �Ǳ�������  ��ʼ������
	vector<int>::iterator pEnd = v.end();//���������� ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��

	//��һ�ֱ�����ʽ��
	while (pBegin != pEnd)//�����ʼ�����������ڽ������������Ͱ��������ȡ����Ȼ��ƫ�ƣ�������һ�� 
	{
		cout << *pBegin << endl;//���������Ե���ָ������
		pBegin++;
	}


	//�ڶ��ֱ�����ʽ��
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//forѭ������ʼ���ʽ��ʲôʱ���˳�ѭ����ĩβѭ����
	{
		cout << *it << endl;
	}
	cout << endl;

	//�����ֱ�����ʽ��
	//ʹ��STL�ṩ��׼�����㷨  ͷ�ļ� algorithm����׼�㷨��ͷ�ļ�
	for_each(v.begin(), v.end(), MyPrint);//�ص�����
}





int main()
{

	test01();
	system("pause");
	return 0;
}