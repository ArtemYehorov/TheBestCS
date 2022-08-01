#include"Weapon.h"
using namespace std;

int main()
{
	setlocale(0, "ru");
	short choise = 0;
	bool e = true;
	while (e)
	{
		cout << "Weapon selection\n1 - Knife\n2 - Pistol\n3 - Automatic rifle\n4 - Shotgun\n5 - Submachine gun\n6 - Sniper\n7 - MACHINE GUN";
		choise = _getch();
		system("cls");
		if (choise == 49)
		{
			Knife a;
			bool end = true;
			while (end)
			{
				cout << "There is a target in front of you.\nWhat do you want to do?\n";
				cout << "R - View number of projectiles\nENTER - Throw knife at target\nSPACE - Aim\n0 - Change weapon\n";

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
				else cout << "Not correct, please try again!\n";
			}
		}
		else if (choise == 50)
		{
			Pistol a;
			bool end = true;
			while (end)
			{
				cout << "There is a target in front of you.\nWhat do you want to do?\n";
				cout << "R - Reload\nENTER - Shoot\nSPACE - Aim\n0 - Change weapon\n";

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
				else cout << "Not correct, please try again!\n";
			}
		}
		else if (choise == 51)
		{
			Rifle a;
			bool end = true;
			while (end)
			{
				cout << "There is a target in front of you.\nWhat do you want to do?\n";
				cout << "R - Reload\nENTER - Shoot\nSPACE - Aim\n0 - Change weapon\n";

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
				else cout << "Not correct, please try again!\n";
			}
		}
		else if (choise == 52)
		{
			Shotgun a;
			bool end = true;
			while (end)
			{
				cout << "There is a target in front of you.\nWhat do you want to do?\n";
				cout << "R - Reload\nENTER - Shoot\nSPACE - Aim\n0 - Change weapon\n";

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
				else cout << "Not correct, please try again!\n";
			}
		}
		else if (choise == 53)
		{
			SubmachineGun a;
			bool end = true;
			while (end)
			{
				cout << "There is a target in front of you.\nWhat do you want to do?\n";
				cout << "R - Reload\nENTER - Shoot\nSPACE - Aim\n0 - Change weapon\n";

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
				else cout << "Not correct, please try again!\n";
			}
		}
		else if (choise == 54)
		{
		SniperRifle a;
		bool end = true;
		    while (end)
		    {
				cout << "There is a target in front of you.\nWhat do you want to do?\n";
				cout << "R - Reload\nENTER - Shoot\nSPACE - Aim\n0 - Change weapon\n";
		    
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
		    	else cout << "Not correct, please try again!\n";
		    }
		}
		else if (choise == 55)
		{
		    MachineGun a;
		    bool end = true;
		    while (end)
		    {
				cout << "There is a target in front of you.\nWhat do you want to do?\n";
				cout << "R - Reload\nENTER - Shoot\nSPACE - Aim\n0 - Change weapon\n";
		    
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
		    	else cout << "Not correct, please try again!\n";
		    }
		}
		else
	    {
		   cout << "Not correct, please try again!\n";
	    }

	}
}