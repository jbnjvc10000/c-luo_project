#include"main.h"
//�û���
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

//��������ú���
void menu(char menu_y_n)
{
	while (menu_y_n == 'y')
	{
		char selecte[100];
		cout << "****************************************************************" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                    ��ӭʹ�ù��ʹ���ϵͳ                      *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            1��Ա���༭                2��Ա����ѯ            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            3������ͳ��                4��ϵͳ�˳�            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                       ��������Ӧ��ţ�                       *" << endl;
		cout << "*                                                              *" << endl;
		cout << "****************************************************************" << endl;
		cin >> selecte;
		if (strlen(selecte)>1)
		{
			cout << "����������������롭��" << endl;
			Sleep(1000);
			system("cls");
		}
		else if (selecte[0] >= 49 && selecte[0] <= 52)
		{
			switch (selecte[0])
			{
			case 49:
				system("cls");
				cout << "������";
				for (int pp = 1; pp <= 6; pp++)
				{
					cout << ".";
					Sleep(100);
				}
				system("cls");
				break;
			case 50:
				system("cls");
				cout << "������";
				for (int pp = 1; pp <= 6; pp++)
				{
					cout << ".";
					Sleep(100);
				}
				system("cls");
				break;
			case 51:
				system("cls");
				cout << "������";
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
				cout << "�����˳�����";
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
			cout << "�����������������";
			for (int pp = 1; pp <= 6; pp++)
			{
				Sleep(60);
				cout << ".";
			}
			system("cls");
		}
	}
}

//������_����
void manager::pri2()
{
	cout << worknum << workname << post << salary << endl;
}

