#include"main.h"

void main()
{
	//�û���¼--������޹�--OK
	char menu_y_n;
	int time = 1;
	while (time != 4)
	{
		int i = 0;
		string un, pd;
		char passwd[100] = { 0 }, temp;
		cout << endl << "                     ��ӭʹ�ù��ʹ���ϵͳ                       " << endl << endl;
		cout << "			 �������û���"<<endl<<"			   ";
		cin >> un;
		cout << endl << "			 ����������"<<endl<<"			   ";
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
				cout << endl << "                     ��ӭʹ�ù��ʹ���ϵͳ                       " << endl << endl;
				cout << "			 �������û���" << endl << "			   " << un << endl << endl;
				cout << "			 ����������" << endl<<"			   ";
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

	//������--���ڵ�����������֮�󷵻������棬ֱ�ӵ���menu("y");����
	menu(menu_y_n);

	manager ma(1, "2", "3", 4);
	tech te(5, "6", "7", 8);
	ma.pri2();
	te.pri2();
	employment company;
}