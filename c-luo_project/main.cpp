#include"main.h"
//登录函数
char login()
{
	char passwd[20] = { 0 }, authenticate[20] = { 0 },temp;
	int j = 0;
	strcpy(passwd, "root");
	while (j != 3)
	{
		int i = 0;
		cout << "管理员登录" << endl << endl << "请输入密码:";
		while ((temp = getch()) != 13)
		{
			authenticate[i] = temp;
			cout << "*";
			i++;
		}
		if (strcmp(passwd, authenticate) == 0)
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
			break;
		}
		else
		{
			system("cls");
			j++;
			if (j != 3) cout << "密码错误，请重新输入" << endl << "还剩" << 3 - j << "次机会" << endl;
			else
			{
				cout << "非法用户，正在退出";
				for (int pp = 1; pp <= 6; pp++)
				{
					cout << ".";
					Sleep(100);
				}
			}
			Sleep(1500);
			system("cls");
		}
	}
	
}
void employment::edit()
{
	system("cls");
	cout << "开发中";
	for (int pp = 1; pp <= 6; pp++)
	{
		cout << ".";
		Sleep(100);
	}
	system("cls");
}
void employment::search()
{	
	system("cls");
	cout << "开发中";
	for (int pp = 1; pp <= 6; pp++)
	{
		cout << ".";
		Sleep(100);
	}
	system("cls");
}
void employment::statistics()
{
	system("cls");
	cout << "开发中";
	for (int pp = 1; pp <= 6; pp++)
	{
		cout << ".";
		Sleep(100);
	}
	system("cls");
}
void main()
{
	employment company;
	char system_y_n = login();
	while (system_y_n == 'y')
	{
		char selecte[10];
		//system("cls");
		cout << "****************************************************************" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                    欢迎使用工资管理系统                      *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            1。员工编辑                2。员工查询            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            3。工资统计                4。系统退出            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                         请输入相应编号：                     *" << endl;
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
				company.edit();
				break;
			case 50:
				company.search();
				break;
			case 51:
				company.statistics();
				break;
			case 52:
				system_y_n = 'n';
				system("cls");
				cout << "正在退出程序" ;
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
			cout << "输入错误，请重新输入……" << endl;
			Sleep(1000);
			system("cls");
		}
	}
}