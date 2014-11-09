#include"main.h"
//用户函数
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