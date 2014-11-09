#include"main.h"
//用户类
int user::charge_un()
{
	if (username==username_confirm) return 1;
	else return 0;
}
int user::charge_pd()
{
	if (passwd==passwd_confirm) return 1;
	else return 0;
}
char user::login(int time)
{
	if (charge_un() == 1 && charge_pd() == 1)
	{
		system("cls");
		cout << "认证成功，正在进入";
		for (int pp = 1; pp <= 6; pp++)
		{
			cout << ".";
			Sleep(100);
		}
		system("cls");
		return 'y';
	}
	else
	{
		system("cls");
		if (time != 3) cout << "密码错误，请重新输入" << endl << "还剩" << 3 - time << "次机会" << endl;
		else
		{
			cout << "非法用户，正在退出";
			for (int pp = 1; pp <= 6; pp++)
			{
				cout << ".";
				Sleep(100);
			}
		}
		Sleep(1000);
		system("cls");
		return 'n';
	}
}

//主界面调用函数
void menu(char menu_y_n)
{
	while (menu_y_n == 'y')
	{
		char selecte[100];
		cout << "****************************************************************" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                    欢迎使用工资管理系统                      *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            1。员工编辑                2。员工查询            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            3。工资统计                4。系统退出            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                       请输入相应编号：                       *" << endl;
		cout << "*                                                              *" << endl;
		cout << "****************************************************************" << endl;
		cin >> selecte;
		if (strlen(selecte)>1)
		{
			cout << "输入错误，请重新输入……" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (selecte[0] >= 49 && selecte[0] <= 52)
		{
			switch (selecte[0])
			{
			case 49:
				system("cls");
				cout << "开发中";
				for (int pp = 1; pp <= 6; pp++)
				{
					cout << ".";
					Sleep(100);
				}
				system("cls");
				break;
			case 50:
				system("cls");
				cout << "开发中";
				for (int pp = 1; pp <= 6; pp++)
				{
					cout << ".";
					Sleep(100);
				}
				system("cls");
				break;
			case 51:
				system("cls");
				cout << "开发中";
				for (int pp = 1; pp <= 6; pp++)
				{
					cout << ".";
					Sleep(100);
				}
				system("cls");
				break;
			case 52:
				menu_y_n = 'n';
				system("cls");
				cout << "正在退出程序";
				for (int pp = 1; pp <= 6; pp++)
				{
					Sleep(60);
					cout << ".";
				}
				cout << endl;
				break;
			default:
				system("cls");
				break;
			}
		}
		else
		{
			cout << "输入错误，请重新输入";
			for (int pp = 1; pp <= 6; pp++)
			{
				Sleep(60);
				cout << ".";
			}
			system("cls");
		}
	}
}

//经理类_函数
void manager::pri2()
{
	cout << worknum << workname << post << salary << endl;
}

