#include"main.h"
char login()
{
	char passwd[20] = { 0 }, authenticate[20] = { 0 },temp;
	strcpy(passwd, "root");
	cout << "�û���¼" << endl << endl << "����������:";
	int i = 0;
	while ((temp=getch()) != 13)
	{
		authenticate[i] = temp;
			cout << "*";
			i++;
	}
	if (strcmp(passwd,authenticate)==0)return 'y';
	else cout << endl << endl << "���˷Ƿ��û�����ֹ����" << endl;
}
void employment::edit()
{
	system("cls");
	cout << "������";
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
	cout << "������";
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
	cout << "������";
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
		system("cls");
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
				cout << "�����˳�����";
				for (int pp = 1; pp <= 6; pp++)
				{
					Sleep(60);
					cout << ".";		
				}
				break;
			default:
				system("cls");
				break;
			}
		}
		else
		{
			cout << "����������������롭��" << endl;
			Sleep(1000);
			system("cls");
		}
	}
}