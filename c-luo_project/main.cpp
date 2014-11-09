#include"main.h"

void main()
{
	char system_y_n='n';
	int time = 1;
	while (time != 4)
	{
		int i = 0;
		string un, pd;
		char passwd[20] = { 0 }, temp;
		cout << "登录管理系统" << endl << endl << "请输入用户名：";
		cin >> un;
		cout << endl << "请输入密码：";
		while ((temp = getch()) != 13)
		{
			passwd[i] = temp;	
			cout << "*";
			i++;
		}
		pd = passwd;
		user admin(un, pd);
		if ((system_y_n = admin.login(time)) == 'y')break;
		else time++;
	}
	//界面开始
	while (system_y_n == 'y')
	{
		char selecte[10];
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
				system_y_n = 'n';
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