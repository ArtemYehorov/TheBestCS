#include"Weapon.h"
#include<vector>
using namespace std;

int main()
{
	setlocale(0, "ru");
	short choise = 0;
	bool e = true;

	vector<Weapon*> a;
	a.push_back(new Knife);
	a.push_back(new Pistol);
	a.push_back(new Rifle);
	a.push_back(new Shotgun);
	a.push_back(new SubmachineGun);
	a.push_back(new SniperRifle);
	a.push_back(new MachineGun);

	while (e)
	{
		cout << "Weapon selection\n1 - Knife\n2 - Pistol\n3 - Automatic rifle\n4 - Shotgun\n5 - Submachine gun\n6 - Sniper\n7 - MACHINE GUN";
		choise = _getch();
		system("cls");
		if (choise == 49)
		{
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
				if (action == a[0]->R || action == a[0]->r) a[0]->Action1();
				else if (action == a[0]->ENTER) a[0]->Action2();
				else if (action == a[0]->SPACE) a[0]->Action3();
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
				if (action == a[1]->R || action == a[1]->r) a[1]->Action1();
				else if (action == a[1]->ENTER) a[1]->Action2();
				else if (action == a[1]->SPACE) a[1]->Action3();
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
				if (action == a[2]->R || action == a[2]->r) a[2]->Action1();
				else if (action == a[2]->ENTER) a[2]->Action2();
				else if (action == a[2]->SPACE) a[2]->Action3();
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
				if (action == a[3]->R || action == a[3]->r) a[3]->Action1();
				else if (action == a[3]->ENTER) a[3]->Action2();
				else if (action == a[3]->SPACE) a[3]->Action3();
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
				if (action == a[4]->R || action == a[4]->r) a[4]->Action1();
				else if (action == a[4]->ENTER) a[4]->Action2();
				else if (action == a[4]->SPACE) a[4]->Action3();
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
		    	if (action == a[5]->R || action == a[5]->r) a[5]->Action1();
		    	else if (action == a[5]->ENTER) a[5]->Action2();
		    	else if (action == a[5]->SPACE) a[5]->Action3();
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
		    	if (action == a[6]->R || action == a[6]->r) a[6]->Action1();
		    	else if (action == a[6]->ENTER) a[6]->Action2();
		    	else if (action == a[6]->SPACE) a[6]->Action3();
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