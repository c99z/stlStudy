//* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//* Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
//* �����10��Ա�����䲿�ź͹���
//* ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
//* �ֲ�����ʾԱ����Ϣ
//

#include <iostream>
using namespace std;
#include <string>
#include <map>;
class Person
{
public:
	Person(string name, int money,int part)
	{
		this->m_money = money;
		this->m_name = name;
		this->m_part = part;

	}

	string m_name;
	int m_money;
	int m_part;



};
#define CEHUA 0;
#define MEISHU 1;
#define YANFA 2;//�곣������������ǰ��ı�ʶ�����ú�����ַ�������

multimap<int, Person>m;

