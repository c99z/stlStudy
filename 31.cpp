#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	//ȡ���������С��ֵ��Ŀ���������ٿռ�
	vTarget.resize(min(v1.size(), v2.size()));

	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
	vector<int>::iterator itEnd =
		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint());
	cout << endl;
	for_each(vTarget.begin(), itEnd, myPrint());//��ʼ�������Լ��ĵ����������ǽ��������ñ��˷��صĵ���������Ȼ������һЩ0����ΪĿ���������ٵĿռ���ܻ���������ϵĽ���С�ڵ�������һ�����ϣ�
	cout << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}