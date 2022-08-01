#include"Weapon.h"
using namespace std;

int main()
{
	setlocale(0, "ru");
	short choise = 0;
	bool e = true;
	while (e)
	{
		cout << "Выбор оружия\n1 - Нож\n2 - Пистолет\n3 - Автомат\n4 - Дробовик\n5 - Пистолет-пулемёт\n6 - Снайперка\n7 - ПУЛЕМЁТ";
		choise = _getch();
		system("cls");
		if (choise == 49)
		{
			Knife a;
			bool end = true;
			while (end)
			{
				cout << "Перед вами мишень.\nЧто вы хотите сделать?\n";
				cout << "R - Посмотреть количество снарядов\nENTER - Метнуть нож в цель\nSPACE - Прицелиться\n0 - сменить оружие\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
						end = false;
						system("cls");
				}
				else cout << "Не корректно, по пробуйте еще раз!\n";
			}
		}
		else if (choise == 50)
		{
			Pistol a;
			bool end = true;
			while (end)
			{
				cout << "Перед вами мишень.\nЧто вы хотите сделать?\n";
				cout << "R - Перезарядка\nENTER - Выстрелить\nSPACE - Прицелиться\n0 - сменить оружие\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "Не корректно, по пробуйте еще раз!\n";
			}
		}
		else if (choise == 51)
		{
			Rifle a;
			bool end = true;
			while (end)
			{
				cout << "Перед вами мишень.\nЧто вы хотите сделать?\n";
				cout << "R - Перезарядка\nENTER - Выстрелить\nSPACE - Прицелиться\n0 - сменить оружие\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "Не корректно, по пробуйте еще раз!\n";
			}
		}
		else if (choise == 52)
		{
			Shotgun a;
			bool end = true;
			while (end)
			{
				cout << "Перед вами мишень.\nЧто вы хотите сделать?\n";
				cout << "R - Перезарядка\nENTER - Выстрелить\nSPACE - Прицелиться\n0 - сменить оружие\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "Не корректно, по пробуйте еще раз!\n";
			}
		}
		else if (choise == 53)
		{
			SubmachineGun a;
			bool end = true;
			while (end)
			{
				cout << "Перед вами мишень.\nЧто вы хотите сделать?\n";
				cout << "R - Перезарядка\nENTER - Выстрелить\nSPACE - Прицелиться\n0 - сменить оружие\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "Не корректно, по пробуйте еще раз!\n";
			}
		}
		else if (choise == 54)
		{
		SniperRifle a;
		bool end = true;
		    while (end)
		    {
		    	cout << "Перед вами мишень.\nЧто вы хотите сделать?\n";
		    	cout << "R - Перезарядка\nENTER - Выстрелить\nSPACE - Прицелиться\n0 - сменить оружие\n";
		    
		    	int action = _getch();
		    	if (action == 224)
		    	{
		    		action = _getch();
		    	}
		    	cout << "\n";
		    	if (action == a.R || action == a.r) a.Action1();
		    	else if (action == a.ENTER) a.Action2();
		    	else if (action == a.SPACE) a.Action3();
		    	else if (action == 48)
		    	{
		    		end = false;
		    		system("cls");
		    	}
		    	else cout << "Не корректно, по пробуйте еще раз!\n";
		    }
		}
		else if (choise == 55)
		{
		    MachineGun a;
		    bool end = true;
		    while (end)
		    {
		    	cout << "Перед вами мишень.\nЧто вы хотите сделать?\n";
		    	cout << "R - Перезарядка\nENTER - Выстрелить\nSPACE - Прицелиться\n0 - сменить оружие\n";
		    
		    	int action = _getch();
		    	if (action == 224)
		    	{
		    		action = _getch();
		    	}
		    	cout << "\n";
		    	if (action == a.R || action == a.r) a.Action1();
		    	else if (action == a.ENTER) a.Action2();
		    	else if (action == a.SPACE) a.Action3();
		    	else if (action == 48)
		    	{
		    		end = false;
		    		system("cls");
		    	}
		    	else cout << "Не корректно, по пробуйте еще раз!\n";
		    }
		}
		else
	    {
		cout << "введино не корректно!\n";
	    }

	}
}