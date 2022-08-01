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
		cout << "You reloaded!\n";
		return Countpatron;
	}

	short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "You have " << Countpatron << " cartridges\n";
			cout << "ENTER - Shot\tR - Reload\n0 - Stop shooting\n";
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
			cout << "You aimed\n";
			return aiming = true;
		}
		else
		{
			system("cls");
			cout << "You stopped aiming!\n";
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
		if (Countpatron == 1) cout << "You have ONE knife!\n";
		else cout << "You threw away your knife!\n";
		int Podbor = 0;
		if (Countpatron == 0)
		{
			cout << "Pick up a knife?\n1 - Yes\t0 - No";
			Podbor = _getch();
			if (Podbor == 49)
			{
				system("cls");
				cout << "You picked up a knife \n";
				return Countpatron++;
			}
			else
			{
				system("cls");
				cout << "You refused to pick up the knife!!\n";
				return Countpatron;
			}
		}
	}

	virtual short Action2() 
	{
		if (Countpatron == 1)
		{
			system("cls");
			cout << "You threw a knife at the target!\n";
			return Countpatron--;
		}
		else
		{
			system("cls");
			Action1();
			return Countpatron;
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
		cout << "You reloaded!\n";
		return Countpatron = 12;
	}

	virtual short Action2() 
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "You have " << Countpatron << " cartridges\n";
			cout << "ENTER - Shot\tR - Reload\n0 - Stop shooting\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Shot!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Invalid input!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Reload?\nR - Yes\t0 - Select another action";
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
		cout << "You reloaded!\n";
		return Countpatron = 30;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "You have " << Countpatron << " cartridges\n";
			cout << "ENTER - Shot\tR - Reload\n0 - Stop shooting\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Shot!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Invalid input!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Reload?\nR - Yes\t0 - Select another action";
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
		cout << "You reloaded!\n";
		return Countpatron = 8;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "You have " << Countpatron << " cartridges\n";
			cout << "ENTER - Shot\tR - Reload\n0 - Stop shooting\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Shot!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Invalid input!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Reload?\nR - Yes\t0 - Select another action";
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
		cout << "You reloaded!\n";
		return Countpatron = 21;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "You have " << Countpatron << " cartridges\n";
			cout << "ENTER - Shot\tR - Reload\n0 - Stop shooting\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Shot!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Invalid input!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Reload?\nR - Yes\t0 - Select another action";
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
		cout << "You reloaded!\n";
		return Countpatron = 5;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "You have " << Countpatron << " cartridges\n";
			cout << "ENTER - Shot\tR - Reload\n0 - Stop shooting\n";
			choise = _getch();
			if (choise == ENTER)
			{
				system("cls");
				cout << "Shot!\n";
				--Countpatron;
			}
			else if (choise == R || choise == r)
			{
				Action1();
			}
			else
			{
				system("cls");
				cout << "Invalid input!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Reload?\nR - Yes\t0 - Select another action";
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
		cout << "You reloaded!\n";
		return Countpatron = 300;
	}

	virtual short Action2()
	{
		int choise = 1;
		while (choise != 48)
		{
			cout << "You have " << Countpatron << " cartridges\n";
			cout << "ENTER - Shot\tR - Reload\n0 - Stop shooting\n";
			choise = _getch();
			if (choise == ENTER)
			{
				cout << "ENTER - single shot\nD - kill!\n";
				choise = _getch();
				if (choise == 68 || choise == 100)
				{
					for (int i = Countpatron; i >= 0 ; i--)
					{
						system("cls");
						cout << i << "shot!\n";
					}
					Countpatron = 0;
				}
				else if (choise == ENTER)
				{

					system("cls");
					cout << "Shot!\n";
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
				cout << "Invalid input!\n";
			}
			if (Countpatron == 0)
			{
				cout << "Reload?\nR - Yes\t0 - Select another action";
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