#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void MyPrint(int val)
{
	cout << val << endl;
}

void test01() {

	//创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
	vector<int> v;
	//向容器中放数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	//v.begin()返回迭代器，这个迭代器指向容器中第一个数据
	//v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型

	vector<int>::iterator pBegin = v.begin();//pBegin 是变量名字  起始迭代器
	vector<int>::iterator pEnd = v.end();//结束迭代器 指向容器元素的最后一个元素的下一个位置

	//第一种遍历方式：
	while (pBegin != pEnd)//如果起始迭代器不等于结束迭代器，就把这个数据取出来然后偏移，访问下一个 
	{
		cout << *pBegin << endl;//迭代器可以当作指针来用
		pBegin++;
	}


	//第二种遍历方式：
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)//for循环，起始表达式；什么时候退出循环；末尾循环体
	{
		cout << *it << endl;
	}
	cout << endl;

	//第三种遍历方式：
	//使用STL提供标准遍历算法  头文件 algorithm，标准算法的头文件
	for_each(v.begin(), v.end(), MyPrint);//回调技术
}





int main()
{

	test01();
	system("pause");
	return 0;
}