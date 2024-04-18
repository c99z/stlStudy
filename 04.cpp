#include <vector>
#include <iostream>
using namespace std;

void printVector(vector<int>& v) {

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";//*�ǽ�����
	}
	cout << endl;
}

//�����ɾ��
void test01()
{
	vector<int> v1;
	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	//βɾ
	v1.pop_back();
	printVector(v1);
	//����
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 1000);//��һ�������ǵ�����
	printVector(v1);

	//ɾ��
	v1.erase(v1.begin());
	printVector(v1);

	//���
	v1.erase(v1.begin(), v1.end());//��ͷ��βɾ�������һ������������ӡ�������ǻ���
	v1.clear();//Ҳ�����
	printVector(v1);
}

int main() {

	test01();

	system("pause");

	return 0;
}