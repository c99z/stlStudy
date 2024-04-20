#include <string>
#include <iostream>
using namespace std;
#include <vector>
#include <deque>
#include <algorithm>
class Person//选手类
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
		string m_Name;
		int m_Score;
	
};

vector<Person> vectorPerson;



//打分
void setScore(deque<int>& dequeScore)
{
	int i = 1;
	dequeScore.resize(10);
	for (deque<int>::iterator it = dequeScore.begin(); it != dequeScore.end(); it++)
	{
		cout << "请第" << i << "位评委打分" << endl;
		cin >> dequeScore[i-1];
		cout << "第" << i << "位评委打分为" << dequeScore[i-1] << endl;
		i++;
		system("pause");
		system("cls");
	}
	cout << "得分为：" << endl;
	for (deque<int>::iterator it = dequeScore.begin(); it != dequeScore.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//求平均分,返回一个double类型的结果
void averScore(deque<int>& dequeScore)
{
	sort(dequeScore.begin(), dequeScore.end());//把分数按从小到大排列
	dequeScore.pop_back();//去掉最低分
	dequeScore.pop_front();//去掉最高分
	double ans;
	double sum=0;
	int i = 1;
	//求和
	for (deque<int>::iterator it = dequeScore.begin(); it != dequeScore.end(); it++)
	{
		sum = sum + *it;
	}
	//求均值
	ans = sum / dequeScore.size();

	cout << "去掉一个最高分和一个最低分，最终得分为" << endl;
	cout<< ans << endl;
}


	void test01()
	{
		deque<int> dequeScore;
		setScore(dequeScore);
		averScore(dequeScore);
	}
	
	//

	int main()
{
	test01();

	system("pause");
	return 0;
}

