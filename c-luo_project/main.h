#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;

//�û���_��¼�ã�������޹�--OK
class user
{
private:
	string username = "root", passwd = "root",username_confirm,passwd_confirm;
public:
	user(string un, string pd)
	{
		username_confirm = un;
		passwd_confirm = pd;
	}
	int charge_un();
	int charge_pd();
	char login(int time);
};

//��������ú���
void menu(char menu_y_n);

//��Ա��-ר���ڼ̳�
class employment
{
public:
	void edit();
	void search();
	void statistics();
};

//Ա����
class employee
{
protected://�ܱ����ı���,�ᱻ����������̳�
	int worknum;//����
	string workname;//����
	string post;//��λ
	int salary;
public:
	employee(int num = 0, string name = "", string p = "", int sa = 0)
	{
		worknum = num;
		workname = name;
		post = p;
		salary = sa;
	}
	~employee(){}
};

//��������������඼���򵥣�����ֱ�Ӽ̳���Ա��
class manager : public employee
{
public:
	manager(int num, string name, string p, int sa) :employee(num, name, p, sa)
	{
		num = 0;
		name = "1";
		p = "p0";
		sa = 123;
	}
	~manager(){}
	void pri2();
protected:
	void insert()
	{}
};

//������Ա�̳��ھ���
class tech :public manager
{
private:
	int workingtime_tech;
public:
	tech(int num = 0, string name = "", string p = "������Ա", int sa = 0) :manager(num, name, p, sa){};
};

//������
void main();