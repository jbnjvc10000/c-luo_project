#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;

//用户类_登录用，与后面无关--OK
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

//主界面调用函数
void menu(char menu_y_n);

//雇员类-专用于继承
class employment
{
public:
	void edit();
	void search();
	void statistics();
};

//员工类
class employee
{
protected://受保护的变量,会被下面的类所继承
	int worknum;//工号
	string workname;//姓名
	string post;//岗位
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

//经理相对于其他类都更简单，所以直接继承于员工
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

//技术人员继承于经理
class tech :public manager
{
private:
	int workingtime_tech;
public:
	tech(int num = 0, string name = "", string p = "技术人员", int sa = 0) :manager(num, name, p, sa){};
};

//主函数
void main();