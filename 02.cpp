//�ַ���ƴ��
#include <iostream>
using namespace std;
#include <string>
void test01()
{
	string str1 = "��";

	str1 += "������Ϸ";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;

	cout << "str1 = " << str1 << endl;
	basic_string <int>::size_type indexCh1a, indexCh1b;//�������������ģ��Ĳ������ͣ���ģ��û���Զ������Ƶ�
	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
	cout << "str3 = " << str3 << endl;
}
	//str3.rfind
int main()
{

	test01();

	system("pause");

	return 0;
}