#include"main.h"

void main()
{
	//用户登录
	char menu_y_n;
	int time = 1;
	while (time != 4)
	{
		int i = 0;
		string un, pd;
		char passwd[100] = { 0 }, temp;
		cout << endl << "                     欢迎使用工资管理系统                       " << endl << endl;
		cout << "			 请输入用户名"<<endl<<"			   ";
		cin >> un;
		cout << endl << "			 请输入密码"<<endl<<"			   ";
		while ((temp = getch()) != 13)
		{
			if (temp != 8)
			{
				passwd[i] = temp;
				cout << "*";
				i++;
			}
			else if (i > 0)
			{
				system("cls");
				cout << endl << "                     欢迎使用工资管理系统                       " << endl << endl;
				cout << "			 请输入用户名" << endl << "			   " << un << endl << endl;
				cout << "			 请输入密码" << endl<<"			   ";
				for (int j = 1; j < i; j++)
				{
					cout << "*";
				}
				passwd[--i] = { 0 };
			}
		}
		pd = passwd;
		user admin(un, pd);
		if ((menu_y_n = admin.login(time)) == 'y')break;
		else time++;
	}
	//主界面
	menu(menu_y_n);
}