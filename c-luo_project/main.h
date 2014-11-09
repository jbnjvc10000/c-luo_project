#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;
class user
{
private:
	string username = "root", passwd = "root",username_confirm,passwd_confirm;
public:
	user(string un, string pd)
	{
		username_confirm = un;
		passwd_confirm = pd;
	}
	int charge_un();
	int charge_pd();
	char login(int time);
};
void main();