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
		cout << "��¼����ϵͳ" << endl << endl << "�������û�����";
		cin >> un;
		cout << endl << "���������룺";
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
	//���濪ʼ
	while (system_y_n == 'y')
	{
		char selecte[10];
		cout << "****************************************************************" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                    ��ӭʹ�ù��ʹ���ϵͳ                      *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            1��Ա���༭                2��Ա����ѯ            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*            3������ͳ��                4��ϵͳ�˳�            *" << endl;
		cout << "*                                                              *" << endl;
		cout << "*                         ��������Ӧ��ţ�                     *" << endl;
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
				system_y_n = 'n';
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