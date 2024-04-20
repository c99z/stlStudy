#include <deque>
#include <iostream>
using namespace std;



void dequePrintf(const deque<int>& d)
{
	for (deque<int>::const_iterator it=d.begin(); it !=d.end(); it++)
	{
		cout << *it << " ";
		
	}
	cout << endl;
}
void test01()
{
	deque<int> a;
	bool b = a.empty();
	cout << b << endl;
	cout << typeid(a.empty()).name() << endl;//a.empty()����ֵ��bool����
}

void test02()
{

	
	deque<int>d1;
	d1.push_back(100);
	d1.push_back(200);
	d1.push_back(300);
	d1.push_back(400);
	d1.push_back(500);
	
	dequePrintf(d1);
	//deque<int>::const_iterator pos = d1.at(2);//����
	deque<int>::const_iterator pos = d1.begin()+3;//�������λ��Ϊ3����0��ʼ����������ǰ����3-1=2��λ��
	
	d1.insert(pos, 1000);

	dequePrintf(d1);



}


int main()
{
	test02();
	system("pause");
	return 0;

}
