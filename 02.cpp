//字符串拼接
#include <iostream>
using namespace std;
#include <string>
void test01()
{
	string str1 = "我";

	str1 += "爱玩游戏";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;

	cout << "str1 = " << str1 << endl;
	basic_string <int>::size_type indexCh1a, indexCh1b;//尖括号里的是类模板的参数类型，类模板没有自动类型推导
	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
	cout << "str3 = " << str3 << endl;
}
	//str3.rfind
int main()
{

	test01();

	system("pause");

	return 0;
}