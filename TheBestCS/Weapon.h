#include<iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
#pragma once
class Weapon
{
public:
	enum KeyCode { ENTER = 13, R = 82, r = 114, SPACE = 32};

	bool aiming = false;
	unsigned short Countpatron;

	short Action1()
	{
		system("cls");
		cout << "Вы перезарядились!\n";
		return Countpatron;
	}

	short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "У вас " << Countpatron << " патронов\n";
			cout << "ENTER - Выстрел\tR - Перезарядка\n0 - Перестать стрелять\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Выстрел!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Введино не корректно!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Перезарядиться?\nR - Да\t0 - Выбор другого действия";
				choise = _getch();
				if (choise == R || choise == r)
				{
					Action1();
				}
				else
				{
					system("cls");
					choise = 48;
					return Countpatron;
				}
			}
		}
	}

	bool Action3()
	{
		if (!aiming)
		{
			system("cls");
			cout << "Вы прицелились\n";
			return aiming = true;
		}
		else
		{
			system("cls");
			cout << "Вы перестали прицеливаться!\n";
			return aiming = false;
		}
	}
	
};

class Knife : public Weapon
{
private:
	bool aiming = false;
	unsigned short Countpatron = 1;
public:
	virtual short Action1() 
	{
		system("cls");
		if (Countpatron == 1) cout << "У вас ОДИН нож!\n";
		else cout << "Вы выкинули свой нож!\n";
		int Podbor = 0;
		if (Countpatron == 0)
		{
			cout << "Подобрать нож?\n1 - Да\t0 - Нет";
			Podbor = _getch();
			if (Podbor == 49)
			{
				system("cls");
				cout << "Вы подобрали нож \n";
				return Countpatron++;
			}
			else
			{
				system("cls");
				cout << "Вы отказались подбирать нож!!\n";
				return Countpatron;
			}
		}
	}

	virtual short Action2() 
	{
		if (Countpatron == 1)
		{
			system("cls");
			cout << "Вы метнули нож в цель!\n";
			return Countpatron--;
		}
		else
		{
			system("cls");
			Action1();
			return Countpatron;
		}
	}

	virtual bool Action3() 
	{
		if (!aiming)
		{
			system("cls");
			cout << "Вы прицелились\n";
			return aiming = true;
		}
		else
		{
			system("cls");
			cout << "Вы перестали прицеливаться!\n";
			return aiming = false;
		}
	}

};

class Pistol : public Weapon
{
private:
	unsigned short Countpatron = 12;
public:

	virtual short Action1()
	{
		system("cls");
		cout << "Вы перезарядились!\n";
		return Countpatron = 12;
	}

	virtual short Action2() 
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "У вас " << Countpatron << " патронов\n";
			cout << "ENTER - Выстрел\tR - Перезарядка\n0 - Перестать стрелять\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Выстрел!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Введино не корректно!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Перезарядиться?\nR - Да\t0 - Выбор другого действия";
				choise = _getch();
				if (choise == R || choise == r)
				{
					Action1();
				}
				else
				{
					system("cls");
					choise = 48;
					return Countpatron;
				}
			}
		}
	}
};

class Rifle : public Weapon
{
private:
	unsigned short Countpatron = 30;
public:
	virtual short Action1() 
	{
		system("cls");
		cout << "Вы перезарядились!\n";
		return Countpatron = 30;
	}

	virtual short Action2() 
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "У вас " << Countpatron << " патронов\n";
			cout << "ENTER - Выстрел\tR - Перезарядка\n0 - Перестать стрелять\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Выстрел!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Введино не корректно!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Перезарядиться?\nR - Да\t0 - Выбор другого действия";
				choise = _getch();
				if (choise == R || choise == r)
				{
					Action1();
				}
				else
				{
					system("cls");
					choise = 48;
					return Countpatron;
				}
			}
		}
	}
};

class Shotgun : public Weapon
{
private:
	unsigned short Countpatron = 8;
public:
	virtual short Action1()
	{
		system("cls");
		cout << "Вы перезарядились!\n";
		return Countpatron = 8;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "У вас " << Countpatron << " патронов\n";
			cout << "ENTER - Выстрел\tR - Перезарядка\n0 - Перестать стрелять\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Выстрел!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Введино не корректно!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Перезарядиться?\nR - Да\t0 - Выбор другого действия";
				choise = _getch();
				if (choise == R || choise == r)
				{
					Action1();
				}
				else
				{
					system("cls");
					choise = 48;
					return Countpatron;
				}
			}
		}
	}
};

class SubmachineGun : public Weapon
{
private:
	unsigned short Countpatron = 21;
public:
	virtual short Action1()
	{
		system("cls");
		cout << "Вы перезарядились!\n";
		return Countpatron = 21;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "У вас " << Countpatron << " патронов\n";
			cout << "ENTER - Выстрел\tR - Перезарядка\n0 - Перестать стрелять\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Выстрел!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Введино не корректно!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Перезарядиться?\nR - Да\t0 - Выбор другого действия";
				choise = _getch();
				if (choise == R || choise == r)
				{
					Action1();
				}
				else
				{
					system("cls");
					choise = 48;
					return Countpatron;
				}
			}
		}
	}
};

class SniperRifle : public Weapon
{
private:
	unsigned short Countpatron = 5;
public:
	virtual short Action1()
	{
		system("cls");
		cout << "Вы перезарядились!\n";
		return Countpatron = 5;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "У вас " << Countpatron << " патронов\n";
			cout << "ENTER - Выстрел\tR - Перезарядка\n0 - Перестать стрелять\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Выстрел!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Введино не корректно!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Перезарядиться?\nR - Да\t0 - Выбор другого действия";
				choise = _getch();
				if (choise == R || choise == r)
				{
					Action1();
				}
				else
				{
					system("cls");
					choise = 48;
					return Countpatron;
				}
			}
		}
	}
};

class MachineGun : public Weapon
{
private:
	unsigned short Countpatron = 300;
public:
	virtual short Action1()
	{
		system("cls");
		cout << "Вы перезарядились!\n";
		return Countpatron = 300;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "У вас " << Countpatron << " патронов\n";
			cout << "ENTER - Выстрел\tR - Перезарядка\n0 - Перестать стрелять\n";
			choise = _getch();
			if (choise == ENTER)
			{
				cout << "ENTER - одиночный выстрел\nD - уничтожение!\n";
				choise = _getch();
				if (choise == 68 || choise == 100)
				{
					for (int i = Countpatron; i >= 0 ; i--)
					{
						system("cls");
						cout << i << " выстрел!\n";
					}
					Countpatron = 0;
				}
				else if (choise == ENTER)
				{

					system("cls");
					cout << "Выстрел!\n";
					--Countpatron;
				}
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Введино не корректно!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Перезарядиться?\nR - Да\t0 - Выбор другого действия";
				choise = _getch();
				if (choise == R || choise == r)
				{
					Action1();
				}
				else
				{
					system("cls");
					choise = 48;
					return Countpatron;
				}
			}
		}
	}
};