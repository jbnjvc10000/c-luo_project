#include"main.h"
//�û�����
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
		cout << "��֤�ɹ������ڽ���";
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
		if (time != 3) cout << "�����������������" << endl << "��ʣ" << 3 - time << "�λ���" << endl;
		else
		{
			cout << "�Ƿ��û��������˳�";
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